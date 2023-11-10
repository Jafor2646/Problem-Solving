class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // vector <int> ans;
        int n = nums.size();
        // for(int i = 0; i<n;i++){
        //     bool flag = true;
        //     int leftMul = 1;
        //     for(int j = 0; j<i; j++){
        //         if(nums[j] == 0){
        //             flag = false;
        //             break;
        //         }
        //         leftMul *= nums[j];
        //     }
        //     if(flag){
        //         int rightMul = 1;
        //         for(int j = n-1; j>i;j--){
        //             if(nums[j] == 0){
        //                 flag = false;
        //                 break;
        //             }
        //             rightMul *= nums[j];
        //         }
        //         if(flag){
        //             ans.push_back(leftMul*rightMul);
        //         }else{
        //             ans.push_back(0);
        //         }
        //     }else{
        //         ans.push_back(0);
        //     }
        // }
        // return ans;
        vector<int> prefix(n,0);
        vector<int> suffix(n,0);
        prefix[0] = 1;
        suffix[n-1] = 1;
        for(int i = 1; i<n;i++){
            prefix[i] = prefix[i-1]*nums[i-1];
        }
        for(int i = n-2; i>=0; i--){
            suffix[i] = suffix[i+1]*nums[i+1];
        }
        for(int i = 0; i<n; i++){
            nums[i] = suffix[i]*prefix[i];
        }
        return nums;
    }
};