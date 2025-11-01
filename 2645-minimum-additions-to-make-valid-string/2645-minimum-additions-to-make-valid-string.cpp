class Solution {
public:
    int addMinimum(string word) {
        if (word.length()==1){
            return 2;
        }
        vector<int>vec(word.length(),'0');
        int top=0,count=0;
        vec[top]=word[0];
        if (word[0]=='b'){
            count+=1;
        } 
        if (word[0]=='c'){
            count+=2;
        }
        for (int i=1;i<word.length();i++){
            if (word[i]=='a'){
                if (vec[top]=='b') count++;
                if (vec[top]=='a') count+=2;
                top++; vec[top]='a';
            } else if (word[i]=='b'){
              if (vec[top]=='b') count+=2;
              if (vec[top]=='c') count+=1;
              top++; vec[top]='b';
            } else {
                if (vec[top]=='c') count+=2;
                if (vec[top]=='a') count+=1;
                top++; vec[top]='c';
            }
        }
        if (vec[top]=='b'){
            count+=1;
        }
        if (vec[top]=='a'){
            count+=2;
        }
        return count;
    }
};