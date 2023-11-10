class Solution {
private:
    vector<vector<int>> memo;
public:
    int dp(int i , int j, vector<int> &num1, vector<int> &num2){
        if(i == num1.size() || j == num2.size()){
            return 0;
        }
        if(memo[i][j] != 0) return memo[i][j];
        int dot = num1[i]*num2[j] + dp(i+1, j+1, num1, num2);
        memo[i][j] = max(dot, max(dp(i+1, j, num1, num2), dp(i, j+1, num1, num2)));
        return memo[i][j];
    }
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        int fmax = nums1[0];
        int fmin = nums1[0];
        int smax = nums2[0];
        int smin = nums2[0];
        for(int i = 1; i<nums1.size(); i++){
            if(nums1[i] > fmax) fmax = nums1[i];
            if(nums1[i] < fmin) fmin = nums1[i];
        }
        for(int i = 1; i<nums2.size(); i++){
            if(nums2[i] > smax) smax = nums2[i];
            if(nums2[i] < smin) smin = nums2[i];
        }
        if(fmax < 0 && smin > 0) return fmax*smin;
        if(fmin > 0 && smax < 0) return fmin*smax;
        memo = vector(nums1.size(), vector(nums2.size(), 0));
        return dp(0,0,nums1, nums2);
    }
};