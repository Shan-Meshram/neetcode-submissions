class Solution {
public:
    int characterReplacement(string s, int k) {
       int maxLen = 0;
       int n = s.size();
       for(int i=0;i<n;i++){
        map<char,int> freq;
        int j=i;
        int maxfreq = 0;

        while(j<n){
            freq[s[j]]++;
            maxfreq = max(maxfreq,freq[s[j]]);
            int len = j-i+1;
            int replacements = len - maxfreq;
            if(replacements<=k){
            maxLen = max(len,maxLen);
            } 
            j++;
        }
       } 
        return maxLen;
    }
};