class Solution {
public:
    bool isPalindrome(string s) {
        int i=0,j=s.length()-1;
        while(i<j){
            if(isApn(s[i]) && isApn(s[j]) && (tolower(s[i])!=tolower(s[j])) ) return false;

            if(tolower(s[i])==tolower(s[j])){
                i++;
                j--;
            }
            if(!isApn(s[i])){
                i++;
            }
            if(!isApn(s[j])){
                j--;
            }
            
        }

        return true;
    }
    bool isApn(char ch){
        return ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9') );
    }
};
