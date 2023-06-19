class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int size = heights.size();
        
        for(int i=0; i<size-1; i++){
            for(int j=i+1; j<size; j++){
                if(heights[i] < heights[j]){
                    swap(heights[i], heights[j]);
                    swap(names[i], names[j]);
                }
            }
        }
        return names;
    }
};