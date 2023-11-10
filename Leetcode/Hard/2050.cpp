class Solution {
private:
    map<int, vector<int>> graph;
public:
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        vector<int> in_degree(n, 0);
        for(int i = 0; i<relations.size(); i++){
          int f = relations[i][0]-1;
          int l = relations[i][1]-1;
          graph[f].push_back(l);
          in_degree[l]++;
        }
        queue<int> q;
        vector<int> max_time(n, 0);
        for(int i = 0; i<n; i++){
          if(in_degree[i] == 0){
            q.push(i);
            max_time[i] = time[i];
          }
        }
        while(!q.empty()){
          int v = q.front();
          q.pop();
          for(int i = 0; i<graph[v].size(); i++){
            max_time[graph[v][i]] = max(max_time[graph[v][i]], max_time[v]+time[graph[v][i]]);
            in_degree[graph[v][i]]--;
            if(in_degree[graph[v][i]] == 0) q.push(graph[v][i]);
          }
        }
        int res = max_time[0];
        for(int i = 1; i<n; i++){
          if(max_time[i] > res) res = max_time[i];
        }
        return res;
    }
};