class Solution {
public:
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
};