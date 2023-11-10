class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        long long res = 0;
        int n = nums.size();
        for(int i = n-2; i>= 0; i--){
            if(nums[i] <= nums[i+1]){
                continue;
            }
            long long numElem = ceil((nums[i]+nums[i+1] - 1LL)/ (nums[i+1]));
            res += numElem-1;
            nums[i] = nums[i] / numElem;
        }
        return res;
    }
};