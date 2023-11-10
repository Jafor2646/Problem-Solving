class Solution {
public:
    int minExtraChar(string s, vector<string>& dictionary) {
        int n = s.length();
        vector<int> dp(n+1, 0);
        for(int st = n-1; st>=0; st--){
            dp[st] = dp[st+1] +1;
            for(int end = st; end < n; end++){
                auto curr = s.substr(st, end-st+1);
                if(count(dictionary.begin(), dictionary.end(),curr)>0){
                    dp[st] = min(dp[st], dp[end+1]);
                }
            }
        }
        return dp[0];
    }
};