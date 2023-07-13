class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0;
        for(; i<nums.size()-1; i+=2){
            if(nums[i] != nums[i+1]){
                return nums[i];
            }
        }
        if(nums.size()%2 != 0){
            return nums[nums.size()-1];
        }
        return -1;
    }
};