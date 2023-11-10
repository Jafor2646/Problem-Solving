class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<int> store(amount + 1);
        store[0] = 1;

        for (int i = n - 1; i >= 0; i--) {
            for (int j = coins[i]; j <= amount; j++) {
                store[j] += store[j - coins[i]];
            }
        }

        return store[amount];
    }
};