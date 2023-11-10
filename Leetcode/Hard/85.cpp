class Solution {
private:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size(),area=0,maxArea=0,num,i;
        vector<int> next(n), prev(n);
        stack<int> s;
        s.push(-1);
        for(i = 0; i<n; i++){
            num = heights[i];
            while(s.top() != -1 && heights[s.top()]>=num){
                s.pop();
            }
            prev[i] = s.top();
            s.push(i);
        }
        while(!s.empty()){
            s.pop();
        }
        s.push(-1);
        for(i = n-1; i>=0; i--){
            num = heights[i];
            while(s.top() != -1 && heights[s.top()] >= num){
                s.pop();
            }
            next[i] = s.top();
            s.push(i);
        }
        for(i = 0;i<n;i++){
            if(next[i] == -1) next[i] = n;
            area = (next[i]-prev[i]-1)*heights[i];
            maxArea = max(maxArea, area);
        }
        return maxArea;
    }
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int rowSize=matrix.size();
        int colSize=matrix[0].size();
        vector<vector<int>> arr(rowSize, vector<int>(colSize));
        for(int i=0;i<rowSize;i++){
            for(int j=0;j<colSize;j++){
                arr[i][j]=matrix[i][j]-'0';
            }
        }

        int area=largestRectangleArea(arr[0]);
        for(int i=1;i<rowSize;i++){
            for(int j=0;j<colSize;j++){
                if(arr[i][j]!=0){
                    arr[i][j]=arr[i][j]+arr[i-1][j];
                }
                else arr[i][j]=0;
            }
            int newArea=largestRectangleArea(arr[i]);
            area=max(newArea,area);
        }
        return area;
        
    }
};