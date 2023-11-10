class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // for(int i = 0; i<matrix.size(); i++){
        //     int low = 0, high = matrix[i].size()-1;
        //     while(low <= high){
        //         int mid = (low+high)/2;
        //         if(matrix[i][mid] == target) return true;
        //         else if(matrix[i][mid]>target) high = mid-1;
        //         else low = mid+1;
        //     }
        // }
        // return false;
        int m = matrix.size();
        if(m == 0) return false;
        int n = matrix[0].size();
        if(n == 0) return false;
        
        int row = 0, col = n-1;
        while(col >= 0 && row < m){
            if(matrix[row][col] == target){
                return true;
            }else if(target < matrix[row][col]){
                col--;
            }else{
                row++;
            }
        }
        
        return false;
    }
};