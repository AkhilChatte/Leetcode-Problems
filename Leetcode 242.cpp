class Solution {
public:
    bool isAnagram(string s, string t) {
        int S1 = s.length();
        int S2 = t.length();

        if (S1 != S2)
            {return false;}
        else{
            sort(s.begin(), s.end());
            sort(t.begin(), t.end());
            if(s == t){
                return true;
            }
            else{
                return false;
            }
        }
    }
};