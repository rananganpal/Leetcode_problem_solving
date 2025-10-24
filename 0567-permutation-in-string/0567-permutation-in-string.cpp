class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int x=findPermutationIndex(s2,s1);
        if (x<0) return false;
        return true;
    }
    int findPermutationIndex(const std::string& S, const std::string& T) {
    int n = S.length();
    int m = T.length();
    if (m > n) return -1;
    
    std::vector<int> targetCount(26, 0);
    std::vector<int> windowCount(26, 0);
    
    for (char c : T) targetCount[c - 'a']++;
    for (int i = 0; i < m; ++i) windowCount[S[i] - 'a']++;
    
    if (windowCount == targetCount) return 0;
    
    for (int i = m; i < n; ++i) {
        windowCount[S[i] - 'a']++;
        windowCount[S[i - m] - 'a']--;
        if (windowCount == targetCount) return i - m + 1;
    }
    return -1;
}
};