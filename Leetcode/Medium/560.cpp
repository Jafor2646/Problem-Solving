class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0, sum = 0;
        map<int, int> check;
        check[0]++;
        for(int i = 0; i<nums.size();i++){
            sum+=nums[i];
            count += check[sum-k];
            check[sum]++;
        }
        return count;
    }
};