class MinStack {
 private:
 static const int SIZE=100001;
 int arr[SIZE],t=-1,minarr[SIZE];
public:
    MinStack() {
        
    }
    
    void push(int val) {
       if (t >= SIZE - 1) return;
        t++;
        arr[t] = val;
        if (t == 0)
            minarr[t] = val;
        else
            minarr[t] = min(val, minarr[t - 1]);
    }
    
    void pop() {
        if (t<0) return;
        t--;
    }
    
    int top() {
        if (t<0) return -1;
        return arr[t];
    }
    
    int getMin() {
        if (t<0) return -1;
        return minarr[t];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */