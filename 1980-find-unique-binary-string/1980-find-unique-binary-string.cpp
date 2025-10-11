class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        if (nums.size()==1 && nums[0]=="1"){
            return "0";
        }
        if (nums.size()==1 && nums[0]=="0"){
            return "1";
        }
        map<string,int>m;
        for (int i=0;i<nums.size();i++){
            m[nums[i]]+=1;
        }
        for (int i=pow(2,nums.size()-1);i<pow(2,nums.size());i++){
            string str=toBinary(i);
           if (m[str]==0){
            return str;
           }
        }
        return "00";
    }
    string toBinary(int num) {
    if (num == 0) return "0";
    
    string binary = "";
    while (num > 0) {
        int bit = num & 1; 
        binary = string(1, '0' + bit) + binary;  
        num >>= 1; 
    }
    
    return binary;
 }
};