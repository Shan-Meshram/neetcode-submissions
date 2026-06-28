class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
     priority_queue<pair<int,vector<int>>> pq;
     int n = points.size();
     for(int i=0;i<n;i++){
        int dis = points[i][0]*points[i][0] + points[i][1]*points[i][1];
        pq.push({dis,points[i]});
        if(pq.size()>k){
            pq.pop();
        }
     }
     vector<vector<int>> ans;
     for(int i=0;i<k;i++){
        
        ans.push_back(pq.top().second);
        pq.pop();

     }

     return ans;
     
    }
};