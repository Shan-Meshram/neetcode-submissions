class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(string stg : strs){
            string key = stg;
            sort(key.begin(),key.end()); // O(nlogn) n is the size of longest string
            mp[key].push_back(stg);
        }
        vector<vector<string>> ans;
        for(auto  &key : mp){      // how to iterate in map 
            ans.push_back(key.second);
        }
        return ans;
    }
};