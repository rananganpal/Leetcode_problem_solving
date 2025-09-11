class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int st=start,end=destination,n=distance.size(),sum1=0,sum2=0,sum=0;
        if (st==destination){
            return 0;
        }
        if (st<end){
              for (int i=end;i!=st;i=(i+1)%n){
                sum1+=distance[i];
            } 
                for (int i=st;i<end;i=(i+1)%n){
                    sum2+=distance[i];
            }
         sum=(sum1<sum2)?sum1:sum2;
        } else {
            for (int i=st;i!=end;i=(i+1)%n){
                sum1+=distance[i]; 
           } 
            for (int i=end;i<st;i=(i+1)%n){
                    sum2+=distance[i];
                }
              sum=(sum1<sum2)?sum1:sum2;
        }
        return sum;
    }
};