class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.length();
        int n2 = s2.length();
        if(n1>n2) return false;
        map<char,int> freq;
        for(char ch : s1){
            freq[ch]++;
        }
        map<char,int> freqs2;
        int k=0;
        while(k<=n1-1){
            freqs2[s2[k]]++;
            k++;
            }

        if(freqs2==freq) return true;

        int i = 1;
        int j = n1;
        while(j<n2){
            freqs2[s2[j]]++;
            freqs2[s2[i-1]]--;
            if(freqs2[s2[i-1]]==0) freqs2.erase(s2[i-1]);

            if(freqs2==freq) return true;
            j++;
            i++;
        }
        return false;   
    }
};