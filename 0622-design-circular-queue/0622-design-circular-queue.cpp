class MyCircularQueue {
private:
    vector<int>q;
    int rear,front,size,n;
public:
    MyCircularQueue(int k) {
         q.resize(k);
        front = -1;
        rear = -1;
        n=0;
        size = k;
    }
    
    bool enQueue(int value) {
        if (front==(rear+1)%size)
        return false;
        if (front==-1 && rear==-1){
            rear=front=0;
            q[rear]=value;
            return true;
        }
        rear=(rear+1)%size;
        q[rear]=value;
        return true;
    }
    
    bool deQueue() {
        if (rear==-1 && front==-1){
            return false;
        }
        if (front==rear){
            front=rear=-1;
            return true;
        }
        front=(front+1)%size;
        return true;
    }
    
    int Front() {
        if (rear==-1 && front==-1){
            return -1;
        }
        return q[front];
    }
    
    int Rear() {
        if (rear==-1 && front==-1){
            return -1;
        }
        return q[rear];
    }
    
    bool isEmpty() {
        if (rear==-1 && front==-1){
            return true;
        }
        return false;
    }
    
    bool isFull() {
        if (front==(rear+1)%size){
            return true;
        }
        return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */