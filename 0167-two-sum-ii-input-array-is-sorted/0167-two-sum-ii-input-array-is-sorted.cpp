class Solution {
public:
    vector<int> twoSum(vector<int>& number, int target) {

        int left = 0;
        int right = number.size() - 1;

        while (left < right) {
            int sum = number[left] + number[right];

            if (sum == target) {
                return {left + 1, right + 1};
            }
            if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
        return {};
    }
};