class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int left=0,right=piles.size()-1;
        int alex=0,bob=0;
        bool alexturn=true;
        while (left<=right){
            if (piles[left]>piles[right]){
                if (alexturn) alex+=piles[left];
                else bob+=piles[left];
                left++;
            } else {
                if (alexturn) alex+=piles[right];
                else bob+=piles[right];
                right--;
            }
            alexturn=(alexturn==true)?false:true;
        }
        return alex>bob;
    }
};