class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        string str="";
        for(int i=0;i<s.length();i++){
            if(isalnum(s[i])){
                str+=tolower(s[i]);
            }
        }
        string revstr="";
        for(int j=str.length()-1;j>=0;j--){
            revstr+=str[j];
        }

        if(str!=revstr){
            return false;
        }
        return true;
    }
};
