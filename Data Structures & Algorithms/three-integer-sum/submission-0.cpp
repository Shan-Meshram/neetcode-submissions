class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        set<vector<int>> UniTrip;
        while(i<nums.size()-2){
            int j=i+1;
            int k = nums.size()-1;
            int target = abs(nums[i]);
            while(j<k){
                int sum = nums[j] + nums[k];
                if(sum<target){
                    j++;
                }
                else if(sum>target){
                    k--;
                }
                else {
                 UniTrip.insert({nums[i],nums[j],nums[k]});  
                 j++;
                 k--;
                }
            }
            i++;
        }
        return vector<vector<int>> (UniTrip.begin(),UniTrip.end());
    }
};