class MinStack {
public:
    stack<int> st;
    stack<int> mst;
    MinStack() {

    }
    
    void push(int value) {
        st.push(value);
        !mst.empty()?mst.push(min(value,mst.top())):mst.push(value);
    }
    
    void pop() {
        st.pop();
        mst.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mst.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */