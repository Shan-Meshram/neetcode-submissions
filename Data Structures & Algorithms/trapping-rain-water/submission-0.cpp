class Solution {
public:
    int trap(vector<int>& height) {
       int n=height.size();
       vector<int> pmax(n);
       int maxi = height[0];
       pmax[0]=0;
       for(int i=1;i<n;i++){
          pmax[i]=max(maxi,height[i-1]);
          maxi = pmax[i];
       } 

       vector<int> smax(n);
       maxi = height[n-1];
       smax[n-1]=0;
       for(int i=n-2;i>=0;i--){
          smax[i]=max(maxi,height[i+1]);
          maxi = smax[i];
       } 

       int water=0;
       for(int i=0;i<n;i++){
        int temp = (min(pmax[i],smax[i]) - height[i]);

        if(temp>0) water+=temp;
       }
       
       return water;
    }
};
