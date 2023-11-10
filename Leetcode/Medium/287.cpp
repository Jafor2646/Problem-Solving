class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // floyd's tortoise and hare algorithm to find cycle
        int tortoise = nums[0];
        int hare = nums[nums[0]];
        while(tortoise != hare){
            tortoise = nums[tortoise];
            hare = nums[nums[hare]];
        }
        int start = 0;
        while(tortoise != start){
            tortoise = nums[tortoise];
            start = nums[start];
        }
        return start;
    }
};