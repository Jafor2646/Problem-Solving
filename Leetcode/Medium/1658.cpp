class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int target = 0;
        for(int n: nums) target += n;
        target -= x;
        if(target == 0) return nums.size();
        int maxLen = 0, currentSum = 0, l = 0;
        for(int r = 0; r< nums.size(); r++){
            currentSum += nums[r];
            while(l<=r && currentSum > target){
                currentSum -= nums[l];
                l++;
            }
            if(currentSum == target){
                maxLen = max(maxLen, r-l+1);
            }
        }
        return maxLen ? nums.size()-maxLen : -1;
    }
};