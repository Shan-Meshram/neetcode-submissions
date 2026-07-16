class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
    //    int n = cost.size();
    //    vector<int> mincost(n,0);
    //    mincost[0]=cost[0];
    //    mincost[1]=cost[1];
    //    for(int i=2;i<n;i++){
    //     mincost[i]= min(mincost[i-1],mincost[i-2])+cost[i];
    //    }
    //    return min(mincost[n-1],mincost[n-2]);
         int n = cost.size();
         int prev1 = cost[1];
         int prev2 = cost[0];

         for(int i=2;i<n;i++){
            int temp = min(prev1,prev2) + cost[i];
            prev2 = prev1;
            prev1 = temp;
         }
         return min(prev2,prev1);
    }
};