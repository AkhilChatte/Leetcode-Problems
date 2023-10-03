class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN;
        int max = 0;
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            max = max + nums[i];
            if (ans < max)
                ans = max;
  
            if (max < 0)
                max = 0;
        }
        return ans;
    }
};