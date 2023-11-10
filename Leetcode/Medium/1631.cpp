class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int r= heights.size(), c = heights[0].size();
        vector<vector<int>> visited(r, vector<int>(c, INT_MAX));
        priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<>> minHeap;
        minHeap.emplace(0,0,0);
        visited[0][0] = 0;
        int directions[4][2] = {{0,1},{0,-1},{1,0}, {-1,0}};
        while(!minHeap.empty()){
            auto[effort, x, y] = minHeap.top();
            minHeap.pop();
            if(effort > visited[x][y]) continue;
            if(x == r-1 && y == c-1) return effort;
            for(auto &dir: directions){
                int x1 = x + dir[0], y1 = y+dir[1];
                if(x1>=0 && x1 < r && y1>=0 && y1 < c){
                    int new_effort = max(effort, abs(heights[x][y]- heights[x1][y1]));
                    if(new_effort < visited[x1][y1]){
                        visited[x1][y1] = new_effort;
                        minHeap.emplace(new_effort, x1, y1);
                    }
                }
            }
        }
        return -1;
    }
};