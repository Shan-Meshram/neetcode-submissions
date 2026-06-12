class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.length();
        int i=0;
        int j=0;
        map<char,int> tfreq;
        for(char ch : t){
            tfreq[ch]++;
        }
        // int minLen = 0;
        string ans = "";
        while(i<n){
            map<char,int> sfreq;
            int len =0;
            j=i;
            while(j<n){
                bool equal = true;
                sfreq[s[j]]++;
                for(auto &it : tfreq){
                    if((tfreq[it.first] > sfreq[it.first])){
                        equal = false ;
                    }
                }
                if(equal){
                  len = j-i+1;
                  if(ans=="" || len<ans.size()){
                  ans=s.substr(i,len);
                }
                // minLen = min(len,minlen);
                } 
                j++;
            }
            i++;
        }
        return ans;
    }
};
