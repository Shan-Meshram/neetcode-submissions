class Solution {
public:
    int jump(vector<int>& nums) {
        int l = 0, r=nums[0];
        int n = nums.size(); 
        if(n==1) return 0;
        if(r>=n-1) return 1;
        int cnt=1;
        while(r<n-1){ 
            int maxi = 0;
            for(int i=l;i<=r;i++){
                maxi = max(nums[i]+i,maxi);
            }
            cnt++;
            l=r+1;
            r = maxi;
        }
        return cnt;

    }
};