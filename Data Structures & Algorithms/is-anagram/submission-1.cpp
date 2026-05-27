class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> freq_s;
        map<char,int> freq_t;
        for(char ch : s){
          freq_s[ch]++;
        }
        for(char ch : t){
          freq_t[ch]++;
        }
        if(freq_t==freq_s) return true;
        return false ;
    }
};
