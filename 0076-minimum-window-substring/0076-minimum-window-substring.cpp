class Solution {
public:
    string minWindow(string s, string t) {

        if (s.length() < t.length())
            return "";

        int need[128] = {0};
        int window[128] = {0};

        for (int i = 0; i < t.length(); i++) {
            need[t[i]]++;
        }

        int left = 0;
        int count = 0;

        int start = 0;
        int minLen = INT_MAX;

        for (int right = 0; right < s.length(); right++) {

            char c = s[right];
            window[c]++;

 
            if (need[c] > 0 && window[c] <= need[c]) {
                count++;
            }

            while (count == t.length()) {

                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    start = left;
                }

                char leftChar = s[left];
                window[leftChar]--;

                if (need[leftChar] > 0 &&
                    window[leftChar] < need[leftChar]) {
                    count--;
                }

                left++;
            }
        }

        if (minLen == INT_MAX)
            return "";

        return s.substr(start, minLen);
    }
};