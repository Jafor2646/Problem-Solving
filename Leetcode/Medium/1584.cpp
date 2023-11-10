class Solution {
public:
    int cost(int x1, int y1, int x2, int y2){
        return abs(x1-x2)+abs(y1-y2);
    }
    int minCostConnectPoints(vector<vector<int>>& points) {
        if(points.size() < 1) return 0;
        size_t n = points.size();
        int ans = 0;
        vector<int> minDistance(n, 0);
        minDistance[0] = INT_MAX;
        for(int i = 1; i< n; i++){
            minDistance[i] = cost(points[0][0], points[0][1], points[i][0], points[i][1]);
        }
        for(int i = 1; i<n; i++){
            auto it = min_element(minDistance.begin(), minDistance.end());
            ans += *it;
            int index = it- minDistance.begin();
            *it = INT_MAX;
            for(int i = 0; i<n; i++){
                if(minDistance[i] == INT_MAX) continue;
                minDistance[i] = min(minDistance[i], cost(points[i][0], points[i][1],points[index][0], points[index][1]));
            }
        }
        return ans;
    }
};