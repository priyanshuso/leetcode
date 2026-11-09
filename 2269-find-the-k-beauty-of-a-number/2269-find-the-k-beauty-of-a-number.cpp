class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s = to_string(num);

        int count = 0;

         for (int i = 0; i <= s.size() - k; i++) {

            string temp = s.substr(i, k);

            int value = stoi(temp);

            if (value != 0 && num % value == 0) {
                count++;
            }
        }
        return count ;
        
    }
};