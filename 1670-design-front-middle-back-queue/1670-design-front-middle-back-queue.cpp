class FrontMiddleBackQueue {
private:
    queue<int> q;
public:
    FrontMiddleBackQueue() {
        
    }
    
    void pushFront(int val) {
        int n = q.size();
        q.push(val);
        for(int i=0;i<n;i++){
            q.push(q.front());
            q.pop();
        }
    }
    
    void pushMiddle(int val) {
        int n = q.size();
        int mid = n / 2;
        for(int i=0;i<mid;i++){
            q.push(q.front());
            q.pop();
        }
        q.push(val);
        for(int i=0;i<n-mid;i++){
            q.push(q.front());
            q.pop();
        }
    }
    
    void pushBack(int val) {
        q.push(val);
    }
    
    int popFront() {
        if(q.size() == 0) return -1;
        int x = q.front();
        q.pop();
        return x;
    }
    
    int popMiddle() {
        if(q.size() == 0) return -1;
        int n = q.size();
        int mid = (n-1)/2;
        for(int i=0;i<mid;i++){
            q.push(q.front());
            q.pop();
        }
        int x = q.front();
        q.pop();
        for(int i=0;i<n-mid-1;i++){
            q.push(q.front());
            q.pop();
        }
        return x;
    }
    
    int popBack() {
        if(q.size() == 0) return -1;
        int n = q.size();
        for(int i=0;i<n-1;i++){
            q.push(q.front());
            q.pop();
        }
        int x = q.front();
        q.pop();
        return x;
    }
};

/**
 * Your FrontMiddleBackQueue object will be instantiated and called as such:
 * FrontMiddleBackQueue* obj = new FrontMiddleBackQueue();
 * obj->pushFront(val);
 * obj->pushMiddle(val);
 * obj->pushBack(val);
 * int param_4 = obj->popFront();
 * int param_5 = obj->popMiddle();
 * int param_6 = obj->popBack();
 */