#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // int k{};
        // if(nums[0]> target){
        //     return 0;
        // }else if(target > nums[nums.size()-1]){
        //     return nums.size();
        // }
        // for(size_t i{0}; i<nums.size(); i++){
        //     if(nums[i] == target){
        //         return i;
        //     }else if(i>=1 && nums[i]>target && nums[i-1]<target){
        //         k = i;
        //         break;
        //     }
        // }
        // return k; 


        int low=0;
        int high=nums.size();
        int mid;
        if(target>nums[high-1]){
            return high;
        }
        while(low<=high){
              mid=(low+high)/2;
            if(nums[mid]==target){  
                return mid;
            }
          
            if(target<nums[mid]){     
            high=mid-1;    
            }else{
            low=mid+1;        
            }
          
        }
         return  low;   
        
    }
};