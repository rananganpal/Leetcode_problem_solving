class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
       vector<int>vec(51,0);
       int XOR=0;
       for (int i=0;i<nums.size();i++){
         vec[nums[i]]+=1;
       }
       for (int i=0;i<51;i++){
        if (vec[i]==2){
            XOR^=i;
        }
       }
       return XOR;
    }
};