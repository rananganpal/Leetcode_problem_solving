int isPrime(int n){
  if (n <= 1) return 0;  
    if (n <= 3) return 1;   
    if (n % 2 == 0 || n % 3 == 0) return 0;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;
}
class Solution {
public:
    bool checkPrimeFrequency(vector<int>& nums) {
        int a=0;
        vector<int>vec(101,0);
        for (int i=0;i<nums.size();i++){
            vec[nums[i]]+=1;
        }
        for (int i=0;i<101;i++){
          if (isPrime(vec[i])){
            a=1; break;
          } else {
            a=0;
          }
        }
        if (a==1){
            return true;
        }
        return false;
    }
};