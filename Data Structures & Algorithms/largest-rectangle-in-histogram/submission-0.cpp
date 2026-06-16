class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int n = heights.size();
        int maxarea=0;
        for(int i=0;i<n;i++){
           while(!st.empty() && heights[i]<heights[st.top()]){
            int idx = st.top();
            int nse = i;
            st.pop();
            int pse = (st.empty())?-1:st.top();
            int area = heights[idx]*(nse-pse-1);
            maxarea = max(maxarea,area);
           }
           st.push(i);
        }
        while(!st.empty()){
            int idx = st.top();
            int nse = n;
            st.pop();
            int pse = (st.empty())?-1:st.top();
            int area = heights[idx]*(nse-pse-1);
            maxarea = max(maxarea,area);
        }
        return maxarea;
    }
};