class Solution {
public:
    bool canJump(vector<int>& nums) {
    //     if(nums.size() == 1) return true;
    //     vector<int> dp(nums.size(),0);
    //     dp[nums.size()-1] = (nums[nums.size()-1] != 0) ? 1: 0;
    //     for(int i = nums.size()-2;i>=0;i--){
    //         if(nums[i] >= (nums.size()-i-1)){
    //             bool temp = true;
    //             for(int j = 0; j<i;j++){
    //                 if(nums[j]>(i-j)) break;
    //                 if(nums[j] == 0){
    //                     temp = false;
    //                     break;
    //                 }
    //             }
    //             if(temp) return temp;
    //         }
    //         if(nums[i]>0) dp[i] = (nums[i] >= (nums.size()-i-1))?1:dp[i+1];
    //         else dp[i] = 0;
    //     }
    //     return (nums[0]!= 0)?dp[0] : 0;
    int reach = 0;
    int n = nums.size();
    int i = 0;
    for (; i < n && i <= reach; i++)
        reach = max(i + nums[i], reach);
    return i == n;
    }
};