class MedianFinder {
public:
   vector<int>nums;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if (nums.size()==0){
            nums.push_back(num);
            return;
        }
    int pos=lower_bound(nums.begin(),nums.end(),num)-nums.begin();
    nums.insert(nums.begin()+pos,num);
    }
    
    double findMedian() {
     int n=nums.size();
    double ans;
    if (n%2)
        ans=nums[n/2];
    else
        ans=(nums[n/2-1]+nums[n/2])/2.0;
    return round(ans*100000)/100000.0;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */