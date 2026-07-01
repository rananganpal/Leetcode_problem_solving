class NumArray {
public:
  int n;
  vector<int>vec;
  vector<int>arr;
    NumArray(vector<int>& nums) {
     n=nums.size();
     vec=nums;
     arr=nums;
     for (int i=1;i<n;i++) vec[i]+=vec[i-1];
    }
    
    void update(int index, int val) {
        if (arr[index]==val) return;
        if (arr[index]>val){
            int diff=arr[index]-val;
            arr[index]=val;
            for (int i=index;i<n;i++) vec[i]-=diff;
        }
        else {
            int diff=val-arr[index];
            arr[index]=val;
            for (int i=index;i<n;i++) vec[i]+=diff;
        }
    }
    
    int sumRange(int left, int right) {
        if (left==0) return vec[right];
        return vec[right]-vec[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */