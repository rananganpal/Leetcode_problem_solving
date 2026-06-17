class Solution {
public:
  void dfs(string temp,int count,int n,int k,vector<string>&vec,int index,int cost){
    if (count==n){
        if (cost<=k) vec.push_back(temp);
        return;
    }
    dfs(temp+'0',count+1,n,k,vec,index+1,cost);
    if (temp.length()==0) dfs(temp+'1',count+1,n,k,vec,index+1,cost+index+1);
    if (temp.length()!=0 && temp[temp.length()-1]!='1') dfs(temp+'1',count+1,n,k,vec,index+1,cost+index+1);
  }
    vector<string> generateValidStrings(int n, int k) {
        vector<string>vec;
        string temp="";
        dfs(temp,0,n,k,vec,-1,0);
        return vec;
    }
};