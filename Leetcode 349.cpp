class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int max1 = *max_element(nums1.begin(), nums1.end());
        vector<int> flag1(max1+1, false);
        for(int i=0; i<nums1.size(); i++){
            if(flag1[nums1[i]] == true){
                continue;
            }
            for(int j=0; j<nums2.size(); j++){
                if(nums1[i] == nums2[j]){
                    ans.push_back(nums1[i]);
                    break;
                }
            }
            flag1[nums1[i]] = true;
        }
        return ans;
    }
};