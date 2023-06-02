class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int L = nums.size();
        if (L==0 || L==1)
            return L;
        int j = 0;
        for (int i=0; i<L-1; i++)
        {
            if(nums[i] != nums[i+1])
            {
                nums[j++] = nums[i];
            }
        }    
        nums[j++] = nums[L-1];
        return j;
    }
};