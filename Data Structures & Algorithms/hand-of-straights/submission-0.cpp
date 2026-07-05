class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
       int n = hand.size();
       if(n%groupSize) return false;
        sort(hand.begin(),hand.end());
        map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[hand[i]]++;
        }
        while(!mp.empty()){
            int start = mp.begin()->first;
            for(int i = start;i<start+groupSize;i++){
                if(mp.find(i)!=mp.end()){
                    mp[i]--;
                    if(mp[i]==0){
                         mp.erase(i);
                    }
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};