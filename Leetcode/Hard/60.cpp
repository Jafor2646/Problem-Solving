class Solution {
public:
    string getPermutation(int n, int k) {
        if(n == 1) return "1";
        vector<int> nums;
        for(int i = 1; i<=n; i++){
            nums.push_back(i);
        }
        for(int i = 1; i<k;i++){
            int temp;
            for(int i=n-1;i>=0;i--){
                int flag=0;
                for(int j=i+1;j<n;j++){
                    if(nums[j]>nums[i]){
                        flag=1;
                        temp=nums[j];
                        nums[j]=nums[i];
                        nums[i]=temp;
                        break;
                    }
                }
                if(flag==0){
                    sort(nums.begin()+i,nums.end());
                }else{
                    break;
                }
            }
        }
        string store = "";
        for(int i = 0; i<n; i++){
            store+=to_string(nums[i]);
        }
        return store;
    }
};