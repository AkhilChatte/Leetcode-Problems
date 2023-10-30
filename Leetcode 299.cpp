class Solution {
public:
    string getHint(string secret, string guess) {
        unordered_map<int, bool> bullIndex;
        int n = secret.size();
        int bulls = 0;
        for(int i=0; i<n; i++){
            if(secret[i] == guess[i]){
                bulls++;
                bullIndex[i] = 1;
            }
        }

        unordered_map<char, int> secretMap;
        vector<int> nums;
        int cows = 0;
        for(int i=0; i<n; i++){
            if(bullIndex[i] == 0){
                secretMap[secret[i]]++;
            }
        }
        for (int i=0; i<n; i++){
            if(bullIndex[i] == 0 && secretMap[guess[i]] != 0){
                cows++;
                secretMap[guess[i]]--;
            }
        }
        return to_string(bulls)+"A"+to_string(cows)+"B";
    }
};