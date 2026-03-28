class Solution {
public:
   int f(int n) {
    int rev=0;
    while (n>0) {
        int digit=n%10;
        rev=rev*10+digit;
        n/=10;
    }
    return rev;
}
    int countDistinctIntegers(vector<int>& nums) {
         unordered_set<int> s;
        for (int num:nums) {
            s.insert(num);
            s.insert(f(num));
        }
        return s.size();
    }
};