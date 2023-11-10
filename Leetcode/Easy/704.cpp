#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        // int low = 0, high = nums.size()-1;
        // while(low<=high){
        //     int mid = (low+high)/2;
        //     if(nums[mid] == target) return mid;
        //     else if(nums[mid] < target) low = mid +1;
        //     else high = mid -1;
        // }
        // return -1;
        int l=0, r=nums.size()-1;
        while(l<r){
            int mid = l + (r-l)/2;
            if(nums[mid] >= target)
                r = mid;
            else
                l = mid + 1;
        }

        if(nums[l] != target) return -1;
        return l;
        
    }
};