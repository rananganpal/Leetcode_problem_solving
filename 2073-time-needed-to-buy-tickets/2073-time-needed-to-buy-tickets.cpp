class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int count=0,front=0;
        while (tickets[k]!=0){
          if (tickets[front]!=0){
            tickets[front]--;
             count++;
          }
          front=(front+1)%tickets.size();
        }
        return count;
    }
};