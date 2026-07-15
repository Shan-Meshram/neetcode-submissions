class Solution {
public:
    int climbStairs(int n) {
     if(n==1) return 1;
      int i = 1;
      int j = 2;
      for(int k=3;k<=n;k++){
        int temp = j;
        j = j + i;
        i = temp ;
      }
      return j;
    }
};