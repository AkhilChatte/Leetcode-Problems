class Solution {
public:
    void sortColors(vector<int>& nums) {
        int size = nums.size();
        for(int i=0; i<size-1; i++){
            for(int j=i+1; j<size; j++){
                if(nums[j] < nums[i]){
                    swap(nums[j], nums[i]);
                }
            }
        }
    }
};