class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> arr(num_people, 0);
        int sum = 0;
        int i = 0;
        while (sum < candies) {
            int give = i + 1;
            if (sum + give > candies) {
                give = candies - sum;
            }
            arr[i % num_people] += give;
            sum += give;
            i++;
        }
        return arr;
    }
};