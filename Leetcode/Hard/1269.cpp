class Solution {
private:
    vector<vector<int>> memo;
    int mod = 1e9 + 7;
public:
    int dp(int current_position, int remain, int size){
        if(remain == 0){
            if(current_position == 0) return 1;
            return 0;
        }
        if(memo[current_position][remain] != -1) return memo[current_position][remain];
        int ans = dp(current_position, remain-1, size) % mod;
        if(current_position>0) ans = (ans + dp(current_position-1, remain-1,size)) % mod;
        if(current_position<size-1) ans = (ans+ dp(current_position+1, remain-1,size)) % mod;
        memo[current_position][remain] = ans;
        return ans;
    }
    int numWays(int steps, int arrLen) {
        arrLen = min(arrLen, steps);
        memo = vector(arrLen, vector(steps+1, -1));
        return dp(0, steps, arrLen);
    }
};