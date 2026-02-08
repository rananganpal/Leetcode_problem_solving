class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        int n1=num1.length(),n2=num2.length();
        int a,b,c,d;
        string temp="";
        for (int i=0;i<n1;i++){
           if (isdigit(num1[i])) temp=temp+num1[i];
           if (num1[i]=='+'){
            a=stoi(temp);
           temp="";
            if (i+1<n1 && num1[i+1]=='-') temp+="-";
           }
           if (num1[i]=='i'){
             b=stoi(temp);
             temp="";
           }
        }
        for (int i=0;i<n2;i++){
           if (isdigit(num2[i])) temp=temp+num2[i];
           if (num2[i]=='+'){
            c=stoi(temp);
           temp="";
            if (i+1<n2 && num2[i+1]=='-') temp+="-";
           }
           if (num2[i]=='i'){
            d=stoi(temp);
             temp="";
           }
        }
        string result="";
        int x=(a*c-b*d),y=(a*d+b*c);
        result+=to_string(x);
        result+="+";
         result+=to_string(y);
         result+="i";
         return result;
    }
};