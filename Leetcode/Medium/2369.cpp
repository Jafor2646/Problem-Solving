class Solution {
public:
    map <int, bool> m;
    bool helper(vector<int>& nums, int i){
        if(m.find(i) != m.end()) return m[i];
        bool ans = false;
        if(i>0 && nums[i] == nums[i-1]){
            ans |= helper(nums, i-2);
        }
        if(i>1 && nums[i] == nums[i-1] && nums[i-1] == nums[i-2]){
            ans |= helper(nums, i-3);
        }
        if (i > 1 && nums[i] == nums[i - 1] + 1 && nums[i - 1] == nums[i - 2] + 1) {
            ans |= helper(nums, i - 3);
        }
        m[i] = ans;
        return ans;
    }
    bool validPartition(vector<int>& nums) {
        m[-1] = true;
        int n = nums.size();
        return helper(nums, n-1);
    }
};