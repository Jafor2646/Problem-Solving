class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums[0] > 1) return 1;
        for(int i = 1; i<nums.size(); i++){
            if(nums[i]<1) continue;
            if(i!= 1 && nums[i] == nums[i-1]) continue;
            if(nums[i-1] < 1 && nums[i] != 1) return 1;
            if(nums[i-1]>0 && ((nums[i] != nums[i-1]+1) && (nums[i] != nums[i-1]))){
                return nums[i-1]+1;
            }
        }
        return (nums[nums.size()-1] > 0) ? nums[nums.size()-1]+1 : 1;
        int i = 0;
        while(i < nums.length) {
            int correct = nums[i] - 1;
            if(nums[i] <= nums.length && nums[i] > 0 && nums[i] != nums[correct]) {

                int temp = nums[i];
                nums[i] = nums[correct];
                nums[correct] = temp;
            }
            else {
                i++;
            }
        }

        int count = 0;


        for(int j = 0; j < nums.length; j++) {

            if(nums[j] != j + 1) {
                return j + 1;
            }
        }


        return nums.length + 1;
    }
};