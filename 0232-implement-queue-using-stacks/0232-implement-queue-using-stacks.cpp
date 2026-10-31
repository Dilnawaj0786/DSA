class MyQueue {
private:
    stack<int> st1;
    stack<int> st2;
    int size = 0;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        st1.push(x);
        size++;   
    }
    
    int pop() {
        while(st1.size() > 1){
            st2.push(st1.top());
            st1.pop();
        }
        int ele = st1.top();
        st1.pop();
        while(st2.size() > 0){
            st1.push(st2.top());
            st2.pop();
        }
        size--;
        return ele;
    }
    
    int peek() {
        while(st1.size() > 0){
            st2.push(st1.top());
            st1.pop();
        }
        int x =  st2.top();
        while(st2.size() > 0){
            st1.push(st2.top());
            st2.pop();
        }
        return x;
    }
    
    bool empty() {
        if(st1.size() == 0) return true;
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */