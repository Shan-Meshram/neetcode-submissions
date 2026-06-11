class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n= s.size();
        int maxLen = 0;
        for(int i=0;i<n;i++){
            set<char> seen;
            int len =0;
            int j=i;
            while((!seen.count(s[j])) && (j<n)){
                len= j-i+1;
                seen.insert(s[j]);
                j++;
            }
            maxLen = max(len,maxLen);
        }
        return maxLen;
    }
};