class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
         vector<int>res(n,0);
         stack<int>st;
         int prev_time=0;
    for (const string& log:logs) {
        stringstream ss(log);
        string idStr, type, timeStr;
        getline(ss, idStr,':');
        getline(ss, type,':');
        getline(ss, timeStr,':');
        int id=stoi(idStr);
        int timestamp =stoi(timeStr);
        if (type == "start") {
            if (!st.empty()) {
                res[st.top()] +=timestamp - prev_time;
            }
            st.push(id);
            prev_time = timestamp;
        } 
        else { // "end"
            res[st.top()] += timestamp - prev_time + 1;
            st.pop();
            prev_time = timestamp + 1;
        }
    }

    return res;
    }
};