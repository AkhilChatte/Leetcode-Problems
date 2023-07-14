class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int size = nums.size();
        vector<string> ans;
        string str;

        for(int i=0; i<size; i++){
            int j=i;
            while((j+1<size) && (nums[j]+1 == nums[j+1])){
                j++;
            }
            if(j>i){
                str += to_string(nums[i]);
                str += "->";
                str += to_string(nums[j]);
            }
            else{
                str += to_string(nums[i]);
            }

            ans.push_back(str);
            str = "";
            i = j;
        }

        return ans;
    }
};