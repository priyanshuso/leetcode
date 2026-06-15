class Solution {
public:
    int thirdMax(vector<int>& nums) {

        sort(nums.begin(), nums.end(), greater<int>());
        vector<int> v;

        for (int i = 0; i < nums.size(); i++) {
            if (i == 0 || nums[i] != nums[i - 1]) {
                v.push_back(nums[i]);
            }
        }

        if (v.size() < 3) {
            return v[0];
        }

        return v[2];
    }
};