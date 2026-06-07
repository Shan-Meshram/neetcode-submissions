class Solution {
public:

    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for(int num : nums){
            st.insert(num);
        }  
        int ans=0;
        for(int stt : st ){
            if(st.find(stt-1)==st.end()){
                int current = stt;
                int longest = 1;
                while(st.find(current+1)!=st.end()){
                    current++;
                    longest++;
                }
                ans = max(ans,longest);
            }
        }

        return ans;
    }
};