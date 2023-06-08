class Solution {
public:

    int findMedian(vector<int>& a, int n)
    {
        // First we sort the array
        //sort(a, a + n);
        sort(a.begin(), a.end());
        // check for even case
        if (n % 2 != 0)
            return a[n / 2];
  
        return (a[(n - 1) / 2] + a[n / 2]) / 2;
    }

    int minMoves2(vector<int>& nums) {
        int count=0;
        int size = nums.size();
        int mid = findMedian(nums, size);
        for(int j=0; j<size; j++){
            if(nums[j] < mid){
                count = count + (mid-nums[j]);
                nums[j] = nums[j]+(mid-nums[j]);
            }
            else if(nums[j] > mid){
                count = count + (nums[j]-mid);
                nums[j] = nums[j]-(nums[j]-mid);
            }
        }
        return count;
    }
};