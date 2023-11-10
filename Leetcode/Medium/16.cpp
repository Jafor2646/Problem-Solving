class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        if(nums.size() < 3) return target;
        if(nums.size() == 3){
            int sum = nums[0] + nums[1] + nums[2];
            return sum;
        }
        int min , mainSum;
        sort(nums.begin(), nums.end());
        for(int i = 0; i<nums.size()-2; i++){
            int low = i+1, high = nums.size()-1, temp = nums[i];
            if(i == 0){
                mainSum = temp + nums[low] + nums[high];
                min = abs(target-mainSum);
            }
            while(low < high){
                int check = nums[low] + nums[high] + temp;
                int diff = abs(target - check);
                if(check == target) return check;
                else if(check < target) low++;
                else if(check > target) high--;
                if(diff < min){
                    mainSum = check;
                    min = diff;
                }
            }
        }
        return mainSum;
    }
};