class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int temp{0};
        vector<int> store {};
        for(unsigned i{0}; i < (nums.size()-1); i++){
            int low = i+1, high = nums.size()-1;
            while(low<=high){
                int mid = (low+high)/2;
                if(nums[i] + nums[mid] == target){
                    temp = 1;
                    store.push_back(i+1);
                    store.push_back(mid+1);
                    break;
                }else if(nums[i] + nums[mid] < target) low = mid+1;
                else high = mid - 1;
            }
            if(temp == 1){
                break;
            }
            
            
        }
        return store;
    }
};