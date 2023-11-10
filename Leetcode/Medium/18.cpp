class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector <vector<int>> store;
        if(nums.size() < 4) return store;
        sort(nums.begin(), nums.end());
        for(int i = 0; i <nums.size()-3; i++){
            for(int j = i+1; j < nums.size()-2; j++){
                int low = j+1, high = nums.size()-1;
                while(low < high){
                    long long sum = long(nums[i]) + long(nums[j]);
                    sum += long(nums[low]);
                    sum += long(nums[high]);
                    if (sum == target){
                        vector <int> temp {nums[i], nums[j], nums[low], nums[high]};
                        bool flag = true;
                        for(int k = 0; k < store.size(); k++){
                            if(temp == store[k]){
                                flag = false;
                                break;
                            }
                        }
                        if(flag){
                            store.push_back(temp);
                            while(low < high && nums[low] == nums[low+1]) low++;
                            while(low < high && nums[high] == nums[high-1]) high--;
                        }else{
                            break;
                        }
                        low++;
                        high--;
                    }else if(sum < target) low++;
                    else high--;
                }
            }
        }
        return store;
    }
};