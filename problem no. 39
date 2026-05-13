class Solution {
public:

    set<vector<int>> s;

    void getAllCombinations(vector<int>& arr,int tar,int idx,vector<vector<int>>& ans,vector<int>& combin) {

        if (tar == 0) {
            if (s.find(combin) == s.end()) {
                ans.push_back(combin);
                s.insert(combin);
            }
            return;
        }

        if (idx == arr.size() || tar < 0) {
            return;
        }

        // Include current element
        combin.push_back(arr[idx]);

        // Same element again
        getAllCombinations(arr, tar - arr[idx], idx, ans, combin);

        combin.pop_back();

        // Exclude ke liye
        getAllCombinations(arr, tar, idx + 1, ans, combin);
    }

    vector<vector<int>> combinationSum(vector<int>& arr, int target) {

        vector<vector<int>> ans;
        vector<int> combin;

        getAllCombinations(arr, target, 0, ans, combin);

        return ans;
    }
};
