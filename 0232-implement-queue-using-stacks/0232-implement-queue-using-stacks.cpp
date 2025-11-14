class MyQueue {
public:
    int size=100;
    int stack1[100],stack2[100];
    int top1,top2;
    MyQueue() {
        top1=top2=-1;
    }
    
    void push(int x) {
        if (top1>=size-1) return;
        stack1[++top1]=x;
    }
    
    int pop() {
        if (top1==-1) return -1;
        while (top1>=0) stack2[++top2]=stack1[top1--];
        top1=-1;
        int item=stack2[top2--];
        while (top2>=0) stack1[++top1]=stack2[top2--];
        return item;
    }
    
    int peek() {
        if (top1==-1) return -1;
        return stack1[0];
    }
    
    bool empty() {
       return top1==-1; 
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