class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int value = nums.size()/3;
        vector<int> ans;
        map<int, int> store;
        for(int i = 0; i<nums.size();i++){
            store[nums[i]]++;
        }
        for(auto it: store){
            if(it.second > value){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};