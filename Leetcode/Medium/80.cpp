class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<= 1) return nums.size();
        int j = 1;
        for(int i = 2; i<nums.size();i++){
            if(nums[j-1] != nums[i]){
                j+=1;
                nums[j] = nums[i];
            }
        }
        return j+1;
    }
};