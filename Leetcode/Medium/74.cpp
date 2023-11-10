class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(target < matrix[0][0] || target > matrix[matrix.size()-1][matrix[0].size()-1]) return false;
        for(int i = 0; i<matrix.size();i++){
            if(target > matrix[i][matrix[i].size()-1]) continue;
            if(target < matrix[i][0]) break;
            int low = 0, high = matrix[i].size()-1;
            while(low<=high){
                int mid = (low+high)/2;
                if(matrix[i][mid] == target) return true;
                else if(matrix[i][mid]>target) high = mid-1;
                else low = mid+1;
            }
        }
        return false;
    }
};