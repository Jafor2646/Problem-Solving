class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        int left = k;
        int right = k;
        int ans = nums[k];
        int currentMin = nums[k];
        while(left> 0 || right < nums.size()-1){
            if(left <= 0){
                right++;
                currentMin = min(currentMin, nums[right]);
            }else if(right >= nums.size()-1){
                left--;
                currentMin = min(currentMin, nums[left]);
            }else if(nums[left-1] < nums[right+1]){
                right++;
                currentMin = min(currentMin, nums[right]);
            }else{
                left--;
                currentMin = min(currentMin, nums[left]);
            }
            ans = max(ans, currentMin*(right-left+1));
        }
        return ans;
    }
};