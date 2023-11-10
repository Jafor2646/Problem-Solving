class Solution {
public:
    void backtrack(vector<int> &nums, vector<int> &store, int i, vector<vector<int>> &ans){
        if(i>=nums.size()){
            ans.push_back(store);
            return;
        }
        backtrack(nums, store, i+1, ans);
        store.push_back(nums[i]);
        backtrack(nums,store,i+1, ans);
        store.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> store;
        backtrack(nums,store,0,ans);
        return ans;
    }
};