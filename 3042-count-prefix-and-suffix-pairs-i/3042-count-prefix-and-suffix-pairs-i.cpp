class Solution {
public:
    bool isPrefixAndSuffix(string a, string b) {
        if (a.size() > b.size()) return false;

        // Prefix check
        if (b.substr(0, a.size()) != a) return false;

        // Suffix check
        if (b.substr(b.size() - a.size()) != a) return false;

        return true;
    }

    int countPrefixSuffixPairs(vector<string>& words) {
        int count = 0;
        int n = words.size();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (isPrefixAndSuffix(words[i], words[j])) {
                    count++;
                }
            }
        }

        return count;
    }
};