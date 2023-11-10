#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i = 0;
        for(int j = 0; j<nums.size(); j++){
            if((nums[j]^1) == (nums[j]+1)){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                ++i;
            }
        }
        return nums;
    }
};