class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        // int n = nums.size();
        // int i = 1;
        // map <int, int> check;
        // while(i < n-1){
        //     if(i != 1){
        //         bool temp = false;
        //         for(auto c: check){
        //             if(c.first == nums[i]){
        //                 i++;
        //                 temp = true;
        //                 break;
        //             }
        //         }
        //         if(temp) continue;
        //     } 
        //     // else{
        //     //     int minIdx = 0;
        //     //     int min = nums[0];
        //     //     for(int j = 1; j<i;j++){
        //     //         if(nums[j] < min){
        //     //             minIdx = j;
        //     //             min = nums[j];
        //     //         }
        //     //     }
        //     //     int maxIdx = n-1;
        //     //     int max = nums[n-1];
        //     //     for(int j = n-2; j>i; j--){
        //     //         if(nums[j] > max){
        //     //             maxIdx = j;
        //     //             max = nums[j];
        //     //         }
        //     //     }
        //     //     if((min < nums[i]) && max > nums[i]) return true;
        //     //     i++;
        //     // }
        //     int low = 0, high = n-1;
        //     while((low < i) && (high > i)){
        //         if(nums[low] < nums[i] && nums[high] > nums[i]) return true;
        //         if(nums[low]>=nums[i] && nums[high]<=nums[i]){
        //             low++;
        //             high--;
        //         }else if(nums[low] >= nums[i]) low++;
        //         else{
        //             high--;
        //         }
        //     }
        //     check[nums[i]]++;
        //     i++;
        // }
        int max = nums[0];
        for(int i = 1; i<nums.size();i++){
            if(max < nums[i]) max = nums[i];
        }

        int min = max;
        int mid = max;
        for(auto n : nums)
        {
            if(n <= min){
                min = n;
            }
            else{
                if(mid < n) return true;
                mid = n;
            }
        }
            
        return false;
    }
};