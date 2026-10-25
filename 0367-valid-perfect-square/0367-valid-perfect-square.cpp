class Solution {
public:
    bool isPerfectSquare(int num) {
        long long left = 1;
        long long right = num;

        while (left <= right) {
            long long mid = left + (right - left) / 2;
            long long ans = mid * mid;
            if (ans == num) {
                return true;
            } else if (ans < num) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return false;
    }
};