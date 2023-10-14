class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int steps=0;
        int currCapcity = capacity;
        int start =0;
        while(start<plants.size()){

              if(plants[start]<=currCapcity){
                  currCapcity-=plants[start];
              }
              else{
                  currCapcity = capacity;
                  currCapcity-=plants[start];
                  steps +=(start*2);
              }
              start++;
              steps ++;
        }
    return steps;
    }
};
