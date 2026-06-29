class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        map<char,int> mp ;
        for(char ch : tasks){
            mp[ch]++;
        }
        priority_queue<int> maxHeap;
        for(auto &it : mp ){
            maxHeap.push(it.second);
        }

        int time = 0;
        queue<pair<int,int>> q;

        while(maxHeap.size()>0 || !q.empty()){
            time++;
         if(maxHeap.size()>0){
             int cur = maxHeap.top()-1;
             maxHeap.pop();
           if(cur) q.push({cur,time+n});
            }
        
           while(!q.empty() && time>=q.front().second){
            maxHeap.push(q.front().first);
            q.pop();
           }
        }
        return time;
    }
};