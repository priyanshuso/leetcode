class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        int n = grid.size();
        int a, b;
        unordered_set<int> s;

        int exp_sum = 0;
        int actu_sum = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                actu_sum = actu_sum + grid[i][j];

                if (s.find(grid[i][j]) != s.end()) {
                    a = grid[i][j];
                    ans.push_back(a);
                }
                s.insert(grid[i][j]);
            }
        }

        exp_sum = (n * n) * (n * n + 1) / 2;

        b = (exp_sum + a) - actu_sum;

        ans.push_back(b);

        return ans;
    }
};