class Solution {
public:
    map <int, int> stone;
    int memoization(vector<int> & stones,vector<vector<int>> &dp, int n, int idx, int prev){
        if(idx == n-1) return 1;
        if(dp[idx][prev] != -1) return dp[idx][prev];
        int ans = 0;
        for(int next = prev-1; next<=prev+1; next++){
            if(next>0 && stone.find(stones[idx]+next) != stone.end()){
                ans = ans || memoization(stones, dp, n,stone[stones[idx]+next], next);
            }
        }
        dp[idx][prev] = ans;
        return dp[idx][prev];
    }
    bool canCross(vector<int>& stones) {
        for(int i = 0; i< stones.size(); i++){
            stone[stones[i]] = i;
        }
        vector<vector<int>> dp(2000, vector<int>(2000, -1));
        return memoization(stones, dp, stones.size(), 0, 0);
    }
};