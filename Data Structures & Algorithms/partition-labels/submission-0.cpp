class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> lastIdx(26,-1);
        int n = s.size();
        for(int i=n-1;i>=0;i--){
            if(lastIdx[s[i] - 'a']==-1){
                lastIdx[s[i] - 'a'] = i;
            }
        }
        int size = 0;
        int maxIdx = 0 ;
        vector<int> ans;
        for(int i=0;i<n;i++){
            size++;
            maxIdx = max(maxIdx,lastIdx[s[i] - 'a']);
            if(i==maxIdx && size!=0){
               ans.push_back(size);
               size = 0; 
            }
        }
        return ans;
    }
};