class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        int a=0;
        unordered_map<string,int>m;
        for (int i=0;i<arr.size();i++){
            m[arr[i]]+=1;
        }
         for (int i=0;i<arr.size();i++){
           if (m[arr[i]]==1){
              a++;
            if (a==k){
             return arr[i];
            }
           }
         }
         return "";
    }
};