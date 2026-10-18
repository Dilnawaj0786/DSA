class MinStack { // (1) extra spaces
    stack<long long> st;
    long long x;
public:
    MinStack() {
        x = LLONG_MAX;
    }
    
    void push(int val) { // O(1)
        long long value = val;
        if(st.size() == 0){
                st.push(value);
                x = value;
        }else{
            if(value >= x) st.push(value);
            else{ // new minimum found save old minimum
                st.push(value + (value-x)); // fake value
                x = value;
            }
        }
    }
    
    void pop() { // O(1)
        if(st.top() < x){
            long long oldmin = 2*x - st.top();
            x = oldmin;
        }
       st.pop();
    }
    
    int top() { // O(1)
        if(st.top() < x){
            return x;
        }else{
            return st.top();
        }
    }
    
    int getMin() { // O(1)
        return x;
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












// class MinStack { // (q) extra spaces
//     stack<int> st;
//     stack<int> st1;
// public:
//     MinStack() {
        
//     }
    
//     void push(int value) { // O(1)
//         st.push(value);
//         if( st1.empty() || value <= st1.top()) st1.push(value);
//         else st1.push(st1.top());
//     }
    
//     void pop() { // O(1)
//         st.pop();
//         st1.pop();
//     }
    
//     int top() { // O(1)
//         return st.top();
//     }
    
//     int getMin() { // O(1)
//         return st1.top();
//     }
// };

// /**
//  * Your MinStack object will be instantiated and called as such:
//  * MinStack* obj = new MinStack();
//  * obj->push(value);
//  * obj->pop();
//  * int param_3 = obj->top();
//  * int param_4 = obj->getMin();
//  */