class Solution {
public:
    int romanToInt(string s) {
        int n = s.length();
        int ans = 0;
        unordered_map<char, int> m;
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;

        int i = n-1;
        while(i > 0){
            char a = s[i];
            switch(a){
                case 'M':
                    if(s[i-1]=='C'){
                        ans = ans + 1000 - 100;
                        i -= 2;}
                    else{
                        ans = ans + 1000;
                        i--;}
                    break;
                case 'D':
                    if(s[i-1]=='C'){
                        ans = ans + 500 - 100;
                        i -= 2;}
                    else{
                        ans = ans + 500;
                        i--;}
                    break;
                case 'C':
                    if(s[i-1]=='X'){
                        ans = ans + 100 - 10;
                        i -= 2;}
                    else{
                        ans = ans + 100;
                        i--;}
                    break;
                case 'L':
                    if(s[i-1]=='X'){
                        ans = ans + 50 - 10;
                        i -= 2;}
                    else{
                        ans = ans + 50;
                        i--;}
                    break;
                case 'X':
                    if(s[i-1]=='I'){
                        ans = ans + 10 - 1;
                        i -= 2;}
                    else{
                        ans = ans + 10;
                        i--;}
                    break;
                case 'V':
                    if(s[i-1]=='I'){
                        ans = ans + 5-1;
                        i -= 2;}
                    else{
                        ans = ans + 5;
                        i--;}
                    break;
                case 'I':
                    ans = ans + 1;
                    i--;
                    break;
            }
        }
        if(i==0)
            ans = ans + m[s[0]];
        return ans;
    }
};