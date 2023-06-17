class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int size = nums.size();
        set<vector<int>> s;
        sort(nums.begin(), nums.end());
        vector<vector<int>> output;
        //int sum = 0;

        for(int i=0; i<size-2; i++){
            int j = i+1;
            int k = size - 1;
            while(j<k){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum>0){
                    k--;
                }
                else if(sum<0){
                    j++;
                }
                else{
                    s.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                }
            }
        }
        for(auto triplets : s)
            output.push_back(triplets);
        return output;
    }
};