class Solution {
public:

    string minWindow(string s, string t) {
        int m = s.size();
        map<char,int> need;
        for(char ch : t){
            need[ch]++;
        }
        int n = need.size();
        int have = 0;
        int l=0;
        int r=0;

        map<char,int> window;

        int minLen = INT_MAX;
        int start;


        while(r<m){
            char c = s[r];
            window[c]++;

            if(need[c] && window[c]==need[c]){
                have++;
            }
            while(have==n){
               int len = r-l+1;
               if(len<minLen){
                minLen = len;
                start = l;
               }
               
               char ch = s[l];
               window[ch]--;
               if(need[ch] && window[ch]<need[ch]){
                have--;
               }
               l++;

            }

            r++;
        }

        return (minLen==INT_MAX)?"":s.substr(start,minLen);
    }
};