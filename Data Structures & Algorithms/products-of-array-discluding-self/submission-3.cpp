class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pp ;
        vector<int> sp ;
        int temp = 1;
        pp.push_back(temp);
        temp = nums[0];
        pp.push_back(temp);
        for(int i=1;i<nums.size();i++){
              temp*=nums[i];
              pp.push_back(temp);
        }
        temp=1;
        sp.push_back(temp);
        temp = nums[nums.size()-1];
        sp.push_back(temp);
        for(int i=nums.size()-2;i>=0;i--){
              temp*=nums[i];
              sp.push_back(temp);
        }
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int temp = pp[i]*sp[nums.size()-1-i];
            ans.push_back(temp);
        }
        return ans;
    }
};
