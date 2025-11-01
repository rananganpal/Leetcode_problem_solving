class MyHashSet {
private:
 static const int SIZE = 1000001;
 bool arr[SIZE];
public:
    MyHashSet() {
        for (int i=0;i<1000001;i++){
            arr[i]=false;
        }
    }
    
    void add(int key) {
        arr[key]=true;
    }
    
    void remove(int key) {
        arr[key]=false;
    }
    
    bool contains(int key) {
        if (arr[key]==true){
            return true;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */