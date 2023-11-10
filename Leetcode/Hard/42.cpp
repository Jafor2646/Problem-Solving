class Solution {
public:
    int trap(vector<int>& height) {
        int s = height.size();
        int result = 0;
        vector<int> left(s), right(s);
        left[0] = height[0];
        right[s-1] = height[s-1];
        for(int i = 1;i<s;i++){
            left[i] = max(left[i-1], height[i]);
        }
        for(int i = s-2; i>=0;i--){
            right[i] = max(height[i], right[i+1]);
        }
        for(int i = 1;i<s-1;i++){
            result += min(left[i],right[i]) - height[i];
        }
        return result;
    }
};