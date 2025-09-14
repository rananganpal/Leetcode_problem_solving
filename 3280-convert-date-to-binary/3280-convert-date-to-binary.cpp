class Solution {
public:
    string convertDateToBinary(string date) {
        string s_year,s_month,s_date,s;
        string year=date.substr(0,4);
        string month=date.substr(5,2);
        string d=date.substr(8,2);
        int y=stoi(year),m=stoi(month),da=stoi(d);
        while (y!=0){
            int x=y%2;
             s_year+=(to_string(x));
             y/=2;
        }
        reverse(s_year.begin(),s_year.end());
        s_year+='-';
         while (m!=0){
            int x=m%2;
             s_month+=(to_string(x));
             m/=2;
        }
       reverse(s_month.begin(),s_month.end());
       s_month+='-';
       while (da!=0){
            int x=da%2;
             s_date+=(to_string(x));
             da/=2;
        }
        reverse(s_date.begin(),s_date.end());
        s=s_year+s_month+s_date;
        return s;
    }
};