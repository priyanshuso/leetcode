class Solution {
public:
    int reverseBits(int n) {
        string b = "";

        for(int i = 31; i>=0; i--){
            b+=((n>>i) & 1) + '0';
        }

        reverse(b.begin(), b.end());

        int N = stoi(b,0,2);

        return N;
        
    }
};