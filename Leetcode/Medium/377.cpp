class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<int> dp(target+1, 0);
        dp[0] = 1;
        for(int i = 1; i<= target; ++i){
            for(int n =0; n< nums.size(); ++n){
                if(i- nums[n] >= 0){
                    dp[i] += dp[i-nums[n]];
                }
            }
        }
        return dp[target];
    }
};