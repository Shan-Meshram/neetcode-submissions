class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int maxLen = 0;
        int l=0;
        int res=0;
        unordered_set<char> seen;
        for(int r=0;r<n;r++){
            while(seen.find(s[r])!=seen.end()){
                seen.erase(s[l]);
                l++;
            }
            seen.insert(s[r]);
            maxLen = max(maxLen,r-l+1);
        }
        return maxLen;
    }
};