class Solution {
public:
    bool checkRecord(string s) {

        int absent = 0;
        int late = 0;

        for (int i = 0; i < s.size(); i++) {

            if (s[i] == 'A') {
                absent++;
                if (absent >= 2)
                    return false;

                late = 0;
            }
            else if (s[i] == 'L') {
                late++;
                if (late >= 3)
                    return false;
            }
            else {
                late = 0;
            }
        }

        return true;
    }
};