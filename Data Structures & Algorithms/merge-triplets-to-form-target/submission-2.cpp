class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        int n = triplets.size();
        vector<int> ans(3,0);
        for(int i=0;i<n;i++){
            if(triplets[i][0]<=target[0] && triplets[i][1]<=target[1] && triplets[i][2]<=target[2]){
                if(triplets[i][0]==target[0]){
                    ans[0]=1;
                }
                if(triplets[i][1]==target[1]){
                    ans[1]=1;
                }                
                if(triplets[i][2]==target[2]){
                    ans[2]=1;
                }
            }
            if(ans[0] && ans[1] && ans[2]){
                return true;
            }
        }
        return (ans[0] && ans[1] && ans[2]);
    }
};