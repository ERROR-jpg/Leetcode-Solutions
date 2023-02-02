class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        array<int, 26> d;
        for (size_t i = 0; i < order.size(); i++)
            d[order[i]-'a'] = i;
        return is_sorted(begin(words), end(words),
                         [&d](const string& a, const string& b) {
                             const auto [ait, bit] = mismatch(begin(a), end(a), begin(b));
                             if (ait == end(a) || bit == end(b))
                                 return a.size() < b.size();
                             return d[*ait-'a'] < d[*bit-'a'];
                         });
    }
};