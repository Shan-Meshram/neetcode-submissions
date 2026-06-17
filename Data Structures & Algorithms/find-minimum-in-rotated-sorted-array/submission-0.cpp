class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        int e = n-1;
        int mid = (e-s)/2 + s;
        if(nums[e]>nums[0]) return nums[0]; 
        while(s<e) {
            mid = (e-s)/2 + s;
            if(nums[mid]>=nums[0]){
                s=mid+1;

            }
            else {
                e=mid;
            }
        }  
        return (s==e)?nums[s]: nums[mid];
    }
};