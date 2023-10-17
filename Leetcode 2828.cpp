class Solution {
public:
    bool isAcronym(vector<string>& words, string s) 
    {
        string str="";
        int n=words.size();
        for(int i=0;i<n;i++)
        {
            string str1=words[i];
            str.push_back(str1[0]);
        }
        if(s==str)
            return true;
        else
            return false;
        
    }
};