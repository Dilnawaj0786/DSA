class MinStack {
    stack<int> st;
    stack<int> st1;
public:
    MinStack() {
        
    }
    
    void push(int value) {
        st.push(value);
        if( st1.empty() || value <= st1.top()) st1.push(value);
        else st1.push(st1.top());
    }
    
    void pop() {
        st.pop();
        st1.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return st1.top();
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