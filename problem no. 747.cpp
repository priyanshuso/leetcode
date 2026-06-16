class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int largest = -1;
        int index = -1;

        for (int i = 0; i < nums.size(); i++) {
            if (largest < nums[i]) {
                largest = nums[i];
                index = i;
            }
        }

        for (int i = 0; i < nums.size(); i++) {

            if (i == index) {
                continue;
            }

            if (largest < 2 * nums[i]) {
                return -1;
            }
        }
        return index;
    }
};