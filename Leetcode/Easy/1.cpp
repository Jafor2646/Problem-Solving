#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int temp{0};
        vector<int> store {};
        for(unsigned i{0}; i < (nums.size()-1); i++){
            for(unsigned j{i+1}; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    temp = 1;
                    store.push_back(i);
                    store.push_back(j);
                    break;
                }
            }
            if(temp == 1){
                break;
            }
            
            
        }
        return store;
        
    }
    
};