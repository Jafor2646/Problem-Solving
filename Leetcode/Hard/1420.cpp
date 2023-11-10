class Solution {
private:
    long dp[51][101][51], pre[51][101][51], mod = 1e9 + 7;
public:
    int numOfArrays(int n, int m, int k) {
        for(int i = 0; i<=m;i++){
            dp[1][i][1] = 1;
            pre[1][i][1] = i;
        }
        for(int i = 2; i<=n;i++){
            for(int j = 1; j <= m; j++){
                for(int o = 1; o<=k; o++){
                    dp[i][j][o] = (1LL*j*dp[i-1][j][o]) % mod;
                    dp[i][j][o] = (dp[i][j][o]+pre[i-1][j-1][o-1]);
                    pre[i][j][o] = (pre[i][j-1][o] + dp[i][j][o]) % mod;
                }
            }
        }
        return pre[n][m][k];
    }
};