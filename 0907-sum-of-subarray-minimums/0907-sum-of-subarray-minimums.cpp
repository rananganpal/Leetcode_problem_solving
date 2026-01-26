class Solution {
public:
    vector<int>findNSE(vector<int>&arr){
        vector<int>n(arr.size());
        stack<int>st;
        for (int i=arr.size()-1;i>=0;i--){
            while (!st.empty() && arr[st.top()]>arr[i]) st.pop();
            n[i]=st.empty()?arr.size():st.top();
            st.push(i);
        }
        return n;
    }
     vector<int> findPSE(vector<int>& arr) {
        int n = arr.size();
        vector<int> pse(n);
        stack<int> st;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] >= arr[i])
                st.pop();
            pse[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return pse;
    }
    int sumSubarrayMins(vector<int>& arr) {
        vector<int>nse=findNSE(arr);
        vector<int>pse=findPSE(arr);
        int total=0;
        const int mod=(int)(1e9+7);
        for (int i=0;i<arr.size();i+=1){
            int left=i-pse[i];
            int right=nse[i]-i;
            total=(total+(long long)arr[i]*left%mod*right%mod)%mod;
        }
        return total;
    }
};