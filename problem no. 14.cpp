class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        int mnLen = 1e7;
        for(int i=0;i<n;i++){
            string s = strs[i];
            mnLen = min(mnLen,(int)s.size());
        }
        string ans = "";
        for(int i=0;i<mnLen;i++){
            int flag = 1;
            for(int j=1;j<n;j++){
                if(strs[j][i] != strs[j-1][i]){
                    flag = 0;
                }
            }
            if(flag == 1){
                ans.push_back(strs[0][i]);
            }else{
                return ans;
            }
        }
        return ans;
    }
};
