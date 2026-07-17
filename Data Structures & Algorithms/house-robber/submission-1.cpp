class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        int rob1 = nums[0];
        int rob2 = max(nums[1],nums[0]);
        for(int i=2;i<n;i++){
            if(nums[i]+rob1>rob2){
                int temp = rob2;
                rob2 = nums[i]+rob1;
                rob1 = temp;
            }
            else{
                rob1 = rob2;
            }
        }
       return rob2;
        
    }
};