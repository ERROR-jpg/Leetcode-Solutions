class Solution
{
    struct TrieNode
    {
        uint32_t    References{};
        bool        IsWord{};
        std::array<std::unique_ptr<TrieNode>, 26>   Children{};
    };

private:

    inline size_t charToIndex(char ch) const
    {
        return static_cast<size_t>(ch - 'a');
    }

    void reverseWords(std::vector<std::string> &words)
    {
        for (auto& word : words)
        {
            std::reverse(std::begin(word), std::end(word));
        }
    }

    bool removeWord(TrieNode* root, std::string const& word) const
    {
        if (!root)
        {
            assert(root);
            return false;
        }

        TrieNode* node = root;

        for (char ch : word)
        {
            node = node->Children[charToIndex(ch)].get();

            if (!node)
            {
                assert(node);
                return false;
            }

            node->References--;
            assert(node->References >= 0);
        }

        if (node->IsWord)
        {
            node->IsWord = false;
            return true;
        }

        return false;
    }

    std::unique_ptr<TrieNode> buildTrie(std::vector<std::string> const& words) const
    {
        auto root = std::make_unique<TrieNode>();

        // Note: The word list is supposed to be unique. 
        std::set<std::string> const uniqueWords{ std::begin(words), std::end(words) };

        for (std::string const& word : uniqueWords)
        {
            TrieNode* node = root.get();

            for (char ch : word)
            {
                TrieNode* nextNode = node->Children[charToIndex(ch)].get();

                if (!nextNode)
                {
                    nextNode = new TrieNode;
                    node->Children[charToIndex(ch)].reset(nextNode);
                }

                node = nextNode;
                node->References++;
            }

            if (node)
            {
                node->IsWord = true;
            }
        }

        return root;
    }

    void findWords(std::vector<std::vector<char>>& board, int row, int col, TrieNode* root, TrieNode* node, std::string& prefix, std::vector<string>& foundWords)
    {
        if (row < 0 || row >= board.size() || col < 0 || col >= board[0].size())
        {
            return;
        }

        constexpr char VISITED_CELL = '#';

        char& cell = board[row][col];

        if (cell == VISITED_CELL)
        {
            return;
        }

        char const ch = cell;

        node = node->Children[charToIndex(ch)].get();

        if (!node || node->References <= 0)
        {
            return;
        }

        prefix.push_back(ch);

        if (node->IsWord)
        {
            removeWord(root, prefix);
            foundWords.emplace_back(prefix);
        }

        cell = VISITED_CELL;

        findWords(board, row + 1, col, root, node, prefix, foundWords);
        findWords(board, row - 1, col, root, node, prefix, foundWords);
        findWords(board, row, col + 1, root, node, prefix, foundWords);
        findWords(board, row, col - 1, root, node, prefix, foundWords);

        cell = ch;

        prefix.pop_back();
    }
    
    struct StartingLocations
    {
        std::vector<std::pair<int, int>>    Locations{};
        bool Reverse{};
    };
    
    StartingLocations getStartingLocations(std::vector<std::vector<char>> const& board, std::vector<std::string> const& words) const
    {
        int const numRows = static_cast<int>(board.size());
        int const numCols = static_cast<int>(board[0].size());

        std::unordered_map<char, size_t> charCount, charCountReverse;
        {
            for (auto const& word : words)
            {
                if (!word.empty())
                {
                    charCount[word.front()]++;
                    charCountReverse[word.back()]++;
                }
            }
        }

        size_t total = 0, totalReverse = 0;
        std::vector<std::pair<int, int>> startingLocations, startingLocationsReverse;
        {
            for (int row = 0; row < numRows; ++row)
            {
                for (int col = 0; col < numCols; ++col)
                {
                    char const ch = board[row][col];

                    auto it = charCount.find(ch);
                    if (it != std::end(charCount))
                    {
                        startingLocations.emplace_back(row, col);
                        total = startingLocations.size() * it->second;
                    }

                    auto it2 = charCountReverse.find(ch);
                    if (it2 != std::end(charCountReverse))
                    {
                        startingLocationsReverse.emplace_back(row, col);
                        totalReverse = startingLocationsReverse.size() * it2->second;
                    }
                }
            }
        }

        if (totalReverse < total)
        {
            return StartingLocations{ startingLocationsReverse, true };
        }
        
        return StartingLocations{ startingLocations, false };
    }

public:

    Solution()
    {

    }

    std::vector<std::string> findWords(std::vector<std::vector<char>>& board, std::vector<std::string>& words)
    {
        StartingLocations locations = getStartingLocations(board, words);

        if (locations.Reverse)
        {
            reverseWords(words);
        }
        
        auto trieRoot = buildTrie(words);

        words.clear();
        words.shrink_to_fit();

        for (auto const& [row, col] : locations.Locations)
        {
            std::string prefix;
            findWords(board, row, col, trieRoot.get(), trieRoot.get(), prefix, words);
        }

        if (locations.Reverse)
        {
            reverseWords(words);
        }

        return words;
    }
};