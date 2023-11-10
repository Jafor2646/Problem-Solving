class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int res = n;
        set <int> unique;
        for(int i = 0; i< nums.size(); i++){
            unique.insert(nums[i]);
        }
        vector<int> uniqueNum;
        for(auto &it: unique){
            uniqueNum.push_back(it);
            
        }
        for(int i = 0; i< uniqueNum.size();i++){
            cout << uniqueNum[i] << endl;
        }
        for(int i = 0; i<uniqueNum.size(); i++){
            int left = uniqueNum[i];
            int right = left + n -1;
            int idx = uniqueNum.size();
            // for(int j = i;j<uniqueNum.size(); j++){
            //     if(uniqueNum[j] > right){
            //         idx = j;
            //         break;
            //     }
            // }
            int low = i, high = uniqueNum.size()-1;
            while(low<=high){
                int mid = (low+high)/2;
                if(uniqueNum[mid] == right){
                    idx = mid+1;
                    break;
                }
                if(uniqueNum[mid] < right){
                    low = mid+1;
                }else{
                    idx = mid;
                    high = mid-1;
                }

            }
            int count = idx - i;
            res = min(res, n-count);
        }
        return res;
    }
};