class Solution {

bool isValid(char a){
    if((a>='a' && a<='z') || (a>='A' && a<='Z') || (a>='0' && a<='9')){
        return true;
    }
    return false;
}

char toLower(char a){
    if(a>='A' && a<='Z'){
        return (a - 'A' + 'a');
    }
    return a;
}

public:
    bool isPalindrome(string s) {
        int size = s.length();
        string str = "";

        for(int i=0; i<size; i++){
            if(isValid(s[i])){
                str.push_back(s[i]);
            }
        }
        cout<<str<<endl;

        for(int j=0; j<str.length(); j++){
            str[j] = toLower(str[j]);
        }
        cout<<str;

        int strLength = str.length();
        for(int k=0; k<str.length()/2; k++){
            if(str[k] != str[strLength-1-k]){
                return false;
            }
        }
        return true;
    }
};