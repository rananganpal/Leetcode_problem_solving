class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count_odd=0,n=arr.size();
        for (int i=0;i<n;i++){
            if (arr[i]%2!=0){
                count_odd++;
            }
        }
        if (count_odd<=2){
            return false;
        }
        int a=1,count=0;
        for (int i=0;i<n;i++){
            if (arr[i]%2!=0){
                count++;
                if (count==3){
                    return true;
                }
                continue;
            }
            count=0;
        }
        
        return false;
    }
};