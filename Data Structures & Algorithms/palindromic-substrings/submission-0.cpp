class Solution {
public:
    int countSubstrings(string s) {
        int n = s.size();
        int cnt = n;
        int i = 0;
        while(i<n){
            //odd
            int l = i-1;
            int r = i+1;
            while(l>=0 && r<n){
                if(s[l]==s[r]){
                    cnt++;
                    l--;
                    r++;
                }
                else{
                    break;
                }
            }

            // even 
            l = i;
            r = i+1;
            while(l>=0 && r<n){
                if(s[l]==s[r]){
                    cnt++;
                    l--;
                    r++;
                }
                else{
                    break;
                }
            }
            i++;
        }

        return cnt;
    }
};