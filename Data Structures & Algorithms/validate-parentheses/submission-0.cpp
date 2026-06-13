class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<int> st;
        for(int i=0;i<n;i++){
            char ch = s[i];
            if(ch=='(' || ch=='[' || ch=='{'){
                st.push(ch);
            }
            else if(!st.empty()) {
                if(ch==')' && st.top()=='('){
                    st.pop();
                }
                else if(ch==']' && st.top()=='['){
                    st.pop();
                }
                else if(ch=='}' && st.top()=='{'){
                    st.pop();
                }
                else {
                    return false;
                }
            }
            else if(st.empty() && ch==')' || ch==']' || ch=='}'){
                return false;
            }
        }
        return st.empty()? true:false;
    }
};