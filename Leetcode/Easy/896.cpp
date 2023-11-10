#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        // if(nums.size() == 0 || nums.size() == 1) return true;
        // int j;
        // for(j = 0; j<nums.size()-1;j++){
        //     if(nums[j] != nums[j+1]) break;
        // }
        // if(j != nums.size()-1){
        //     if(nums[j] < nums[j+1]){
        //     for(int i = j; i<nums.size()-1; i++){
        //         if(nums[i] > nums[i+1]){
        //             return false;
        //         }
        //     }
        //     }else if(nums[j] > nums[j+1]){
        //         for(int i = j; i<nums.size()-1; i++){
        //             if(nums[i] < nums[i+1]){
        //                 return false;
        //             }
        //         }
        //     }
        // }
        // return true;

        if (nums.size() < 2) return true;

        int direction = 0;

        for (size_t i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i-1]) {
                if (direction == 0) direction = 1;
                else if (direction == -1) return false;
            } else if (nums[i] < nums[i-1]) {
                if (direction == 0) direction = -1;
                else if (direction == 1) return false;
            }
        }

        return true;
    }
};