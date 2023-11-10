class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int prod = 1, ans = 0, left = 0;
        for(int r = 0; r<nums.size(); r++){
            prod *= nums[r];
            while(prod >= k) prod/=nums[left++];
            ans += r - left + 1;
        }
        return ans;
    }
};