class Solution {
public:
    vector<vector<int>> store;
    vector<vector<int>> permute(vector<int>& nums) {
        helper(nums, 0, nums.size()-1);
        return store;
    }
    void helper(vector<int>nums, int l, int r){
        if(l == r) store.push_back(nums);
        else{
            for(int i = l; i<=r;i++){
                swap(nums[l],nums[i]);
                helper(nums, l+1, r);
                swap(nums[l], nums[i]);
            }
        }
    }
};