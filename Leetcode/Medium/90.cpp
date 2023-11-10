class Solution {
public:
    void backtrack(vector<int> &nums, vector<int> &store, int i, vector<vector<int>> &ans){
        if(i>=nums.size()){
            bool temp = true;
            for(int j = 0; j< ans.size(); j++){
                if(store == ans[j]){
                    temp = false;
                    break;
                }
            }
            if(temp) ans.push_back(store);
            return;
        }
        backtrack(nums,store,i+1, ans);
        store.push_back(nums[i]);
        backtrack(nums,store,i+1, ans);
        store.pop_back();
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> store;
        backtrack(nums,store,0,ans);
        return ans;
    }
};