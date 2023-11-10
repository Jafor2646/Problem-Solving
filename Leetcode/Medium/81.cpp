class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        if(n == 0) return true;
        int low = 0;
        int high = n-1;
        while(low<=high){
            int mid = low + (high-low) /2;
            if(nums[mid] == target) return true;
            if(nums[low] == nums[mid]){
                low++;
                continue;
            }
            bool flag1 = (nums[low] <= nums[mid]);
            bool flag2 = (nums[low] <= target);
            if(flag1 != flag2){
                if(flag1){
                    low = mid + 1;
                }else{
                    high = mid - 1;
                }
            }else{
                if(nums[mid] < target) low = mid+1;
                else high = mid - 1;
            }
        }
        return false;
        
    }
};