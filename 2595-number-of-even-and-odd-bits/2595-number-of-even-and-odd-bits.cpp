class Solution {
public:
    vector<int> evenOddBit(int n) {
        vector<int>even_odd(2,0);
        int even=0,odd=0;
        vector<int>vec;
        int num=n;
        while (num!=0){
            vec.push_back(num%2);
            num/=2;
        }
         for (int i=0;i<vec.size();i++){
            if (i%2==0 && vec[i]==1){
                even++;
            } 
            if (i%2!=0 && vec[i]==1){
                odd++;
            }
         }
         even_odd[0]=even; even_odd[1]=odd;
         return even_odd;
    }
};