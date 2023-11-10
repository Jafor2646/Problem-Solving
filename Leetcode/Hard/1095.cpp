/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int size = mountainArr.length();
        int low = 1;
        int high = size-2;
        while(low<=high){
            int mid = (low+high)/2;
            if(mountainArr.get(mid) < mountainArr.get(mid+1)){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        int maxIdx = low;
        cout << maxIdx << endl;
        low = 0;
        high = maxIdx;
        int lowIdx = -1;
        while(low<=high){
            int mid = (low+high)/2;
            if(mountainArr.get(mid) == target){
                lowIdx = mid;
                high = mid-1;
            }  
            else if(mountainArr.get(mid) < target){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        if(lowIdx != -1) return lowIdx;
        high = maxIdx+1;
        low = size-1;
        while(low >= high){
            int mid = (low+high)/2;
            if(mountainArr.get(mid) == target){
                lowIdx = mid;
                high = mid+1;
            }else if(mountainArr.get(mid) < target){
                low = mid -1;
            }else{
                high = mid+1;
            }
        }
        return lowIdx;
    }
};