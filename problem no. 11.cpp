class Solution {
public:
    int maxArea(vector<int>& height) {

        int l = 0;
        int r = height.size() - 1;

        long long maxi = 0;

        while(l < r){

            long long h = min(height[l], height[r]);

            long long w = r - l;

            long long area = h * w;

            maxi = max(maxi, area);

            if(height[l] < height[r]){
                l++;
            }
            else{
                r--;
            }
        }

        return maxi;
    }
};
