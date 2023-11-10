class Solution {
public:
    int search(vector<int>& nums, int target) {
        // int min = nums[0], minIdx = 0;
        // for(int i = 1; i<nums.size(); i++){
        //     if(nums[i] > min) continue;
        //     else{
        //         min = nums[i];
        //         minIdx = i;
        //         break;
        //     }
        // }
        // int low = minIdx, high = minIdx+nums.size()-1;
        // while(low <= high){
        //     int mid = (low+high)/2;
        //     if(nums[mid%nums.size()] == target) return mid%nums.size();
        //     else if(nums[mid%nums.size()] < target) low = mid+1;
        //     else high = mid-1;
        // }
        // return -1;
        int low = 0;
        int high = nums.size() - 1;
        
        while(low <= high) {
			int mid = (low + high)/2; 
			
            if(nums[mid] == target)
                return mid;
            
            if(nums[low] <= nums[mid]) {
                if(target >= nums[low] && target <= nums[mid])
                    high = mid - 1;
                else
                    low = mid + 1;
            }
            else {
                if(target >= nums[mid] && target <= nums[high])
                    low = mid + 1;
                else
                    high = mid - 1;
            }
        }
        
        return -1;
    
    }
};