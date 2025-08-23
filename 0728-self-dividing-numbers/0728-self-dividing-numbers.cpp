int f(int n){
    int num=n,a=1;
    while (num!=0){
        if (num%10==0){
            return 0;
        }
        if (n%(num%10)==0){
            a=1;
        } else {
            a=0;
            break;
        }
        num/=10;
    }
    return a;
}
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>vec;
        for (int i=left;i<=right;i++){
            if (f(i)){
                vec.push_back(i);
            }
        }
        return vec;
    }
};