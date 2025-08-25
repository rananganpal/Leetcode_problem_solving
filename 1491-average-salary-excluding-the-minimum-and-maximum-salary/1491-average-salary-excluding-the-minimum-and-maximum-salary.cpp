class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        if (salary.size()==3){
            return round(salary[1]*100000)/100000;
        }
        double av,n=salary.size()-2;
        double sum=0;
        for (int i=1;i<salary.size()-1;i++){
            sum+=salary[i];
        }
        av=sum/n;
        av=round(av*100000)/100000;
        return av;
    }
};