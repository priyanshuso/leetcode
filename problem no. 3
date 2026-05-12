class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       unordered_set<char>st;
       int left = 0;
       int maxlen = 0;

       for(int i = 0 ; i<s.size();i++){
        while(st.count(s[i])){
            st.erase(s[left]);
            left++;
        }
        st.insert(s[i]);
        maxlen = max(maxlen, i - left+1);

       }
       return maxlen;
       }
};
