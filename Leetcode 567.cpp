class Solution {
    bool chkEqual(int a[26], int b[26]){
        for(int i=0; i<26; i++){
            if(a[i] != b[i]){
                return false;
            }
        }
        return true;
    }
public:
    bool checkInclusion(string s1, string s2) {
        //character count array for s1
        int count1[26] = {0};
        for(int i=0; i<s1.length(); i++){
            int index = s1[i]-'a';
            count1[index]++;
        }

        //traverse s2 string in window of size s1.length() and compare
        int i = 0;
        int window = s1.length();
        int count2[26] = {0};
        //for first window
        while(i<window && i<s2.length()){
            int index = s2[i]-'a';
            count2[index]++;
            i++;
        }
        if(chkEqual(count1, count2)){
            return true;
        }

        //next window
        while(i<s2.length()){
            char newElement = s2[i];
            int index = newElement-'a';
            count2[index]++;

            char oldElement = s2[i-window];
            index = oldElement-'a';
            count2[index]--;
            i++;

            if(chkEqual(count1, count2)){
                return true;
            }
        }
        return false;
    }
};