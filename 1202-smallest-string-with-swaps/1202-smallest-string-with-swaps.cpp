class UnionFind {
public:
    vector<int> root_;
    vector<int> rank_;
    UnionFind(int n) {
        root_ = vector<int>(n);
        rank_ = vector<int>(n, 1);
        for (int i = 0; i < n; i++) {
            root_[i] = i;
        }
    }
    
    int findRoot(int cur) {
        if (root_[cur] == cur) return cur;
        return root_[cur] = findRoot(root_[cur]);
    }
    
    void connect(int n1, int n2) {
        int rt_n1 = findRoot(n1);
        int rt_n2 = findRoot(n2);
        if (rt_n1 == rt_n2) return;
        if (rank_[rt_n1] > rank_[rt_n2]) {
            root_[rt_n2] = rt_n1;
        }else if (rank_[rt_n1] < rank_[rt_n2]) {
            root_[rt_n1] = rt_n2;
        }else {
            root_[rt_n2] = rt_n1;
            rank_[rt_n1]++;
        }
        return;
    }
};

class Solution {
public:
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        const int n = s.size();
        UnionFind uf(n);
        for (const vector<int> &p : pairs) {
            uf.connect(p[0], p[1]);
        }
        // root id to children id
        unordered_map<int,vector<int>> m;
        for (int i = 0; i < n; i++) {
            m[uf.findRoot(i)].push_back(i);
        }
        for (auto p : m) {
            string word;
            vector<int> &children = p.second;
            for (const int id : children) {
                word += s[id];
            }
            sort(word.begin(), word.end());
            for (int i = 0; i < children.size(); i++) {
                s[children[i]] = word[i];
            }
        }
        return s;
    }
};
