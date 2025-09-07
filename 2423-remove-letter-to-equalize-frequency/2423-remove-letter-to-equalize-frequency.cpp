class Solution {
public:
 bool allEqual(const vector<int>& freq) {
        int val = 0;
        for (int f : freq) {
            if (f > 0) {
                if (val == 0) val = f;
                else if (f != val) return false;
            }
        }
        return true;
    }
    bool equalFrequency(string word) {
      vector<int> freq(26, 0);
        for (char c : word) freq[c - 'a']++;
        for (int i = 0; i < 26; i++) {
            if (freq[i] == 0) continue;
            freq[i]--;  // remove one occurrence
            if (allEqual(freq)) return true;
            freq[i]++;  // restore
        }
        return false;
    }
};