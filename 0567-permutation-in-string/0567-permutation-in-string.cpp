class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();
        
        if(n > m) return false;
        
        int freq[26] = {0};

        for(int i = 0; i < n; i++){
            freq[s1[i] - 'a']++;
        }
        
        int left = 0;
        

        for(int right = 0; right < m; right++){
      
            freq[s2[right] - 'a']--;
            
         
            while(freq[s2[right] - 'a'] < 0){
                freq[s2[left] - 'a']++;
                left++;
            }
          
            if(right - left + 1 == n){
                return true;
            }
        }
        
        return false;
    }
};