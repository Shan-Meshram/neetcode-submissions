class Solution {
public:

    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int currGas = 0;
        int sumG =0;
        int sumC = 0;
        for(int i =0;i<n;i++){
            sumG+=gas[i];
            sumC+=cost[i];
        }
        if(sumC>sumG) return -1;

        int ans =0 ;
        int i = 0 ;

        while(i<n){
            currGas+=(gas[i] - cost[i]);

            if(currGas<0){
                currGas=0;
                ans = i+1;
            }
            i++;
        }
        return ans;
    }
};