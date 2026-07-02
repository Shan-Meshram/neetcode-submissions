class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int i = n-2;
        int goal = n-1;
        while(i>0){
           if(i+nums[i]>=goal){
            goal = i;
           }
           i--;
        }
        if(nums[0]>=goal)  return true;

      return false;
    }
};