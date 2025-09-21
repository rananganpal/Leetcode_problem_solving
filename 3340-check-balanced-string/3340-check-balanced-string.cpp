class Solution {
public:
    bool isBalanced(string num) {
     int sum_odd=0,sum_even=0;
      for (int i=0;i<num.length();i++){
        int d=num[i]-'0';
        if (i%2==0){
          sum_even+=d;
        } else {
            sum_odd+=d;
        }
      }
      return sum_odd==sum_even;
    }
};