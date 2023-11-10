class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i = 0; i<nums.size()-1;i++){
            int minIdx = i;
            for(int j = i+1; j<nums.size();j++){
                if(nums[j] < nums[minIdx]) minIdx = j;
            }
            int temp = nums[i];
            nums[i] = nums[minIdx];
            nums[minIdx] = temp;
        }
        
    }
};