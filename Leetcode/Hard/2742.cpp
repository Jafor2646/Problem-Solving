class Solution {
private:
    vector<vector<int>> memo;
    int dp(vector<int> &cost, vector<int> &time, int i, int rem, int size){
        if(rem <=0) return 0;
        if(i == size) return 1000000009;
        if(memo[i][rem] != -1) return memo[i][rem];
        int with = cost[i] + dp(cost, time, i+1, rem-1-time[i],size);
        int without = dp(cost, time, i+1, rem,size);
        memo[i][rem] = min(with, without);
        return memo[i][rem];
    }
public:
    int paintWalls(vector<int>& cost, vector<int>& time) {
        int n = cost.size();
        memo = vector(n,vector(n+1,-1));
        return dp(cost, time, 0,n,n);
    }
};