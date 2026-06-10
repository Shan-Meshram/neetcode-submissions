class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int maxLen = 0 ;
        for(int i=0;i<n;i++){
            unordered_map<char,int> freq;
            int len = 0;
            int maxfreq = 0;
            for(int j=i;j<n;j++){
                freq[s[j]]++;
                maxfreq = max(maxfreq,freq[s[j]]);
                len = j-i+1;
                int replacements = len - maxfreq;
                if(replacements<=k){
                    maxLen = max(maxLen,len);
                }
            }
        }
        return maxLen;
    }
};