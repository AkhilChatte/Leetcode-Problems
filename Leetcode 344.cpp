class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int Start = 0;
        int End = n - 1;
        while(Start <= End){
            swap(s[Start], s[End]);
            Start++;
            End--;
        }
    }
};