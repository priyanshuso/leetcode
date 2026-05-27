class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> lastLower(26, -1);
        vector<int> firstUpper(26, INT_MAX);

        for (int i = 0; i < word.size(); i++) {
            char ch = word[i];
            int idx = tolower(ch) - 'a';

            if (islower(ch)) {
                lastLower[idx] = i;
            } else {
                firstUpper[idx] = min(firstUpper[idx], i);
            }
        }

        int ans = 0;

        for (int i = 0; i < 26; i++) {
            if (lastLower[i] != -1 && firstUpper[i] != INT_MAX &&
                lastLower[i] < firstUpper[i]) {
                ans++;
            }
        }

        return ans;
    }
};