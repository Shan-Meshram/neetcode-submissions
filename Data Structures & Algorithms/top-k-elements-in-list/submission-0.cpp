class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> freq;
        for(int i : nums){
            freq[i]++;
        }
        vector<vector<int>> bucket(nums.size()+1);
        for(auto &it : freq){
            int num = it.first;
            int count = it.second;
            bucket[count].push_back(num);
        }
        vector<int> ans;
        for(int i=nums.size();i>0 && ans.size()<k;i--){
            for(int num : bucket[i]){
                ans.push_back(num);
            }
        }
        return ans;
    }
};