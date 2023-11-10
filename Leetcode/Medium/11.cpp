class Solution {
public:
    int maxArea(vector<int>& height) {
        size_t check = 0, max = 0;
        int i = 0, j = height.size()-1;
        while(i<j){
            if(height[i] < height[j]){
                check = height[i]*(j-i);
                i++;
            }else{
                check = height[j]*(j-i);
                j--;
            }
            if(max < check){
                max = check;
            }
        }
        return max;
    }
};