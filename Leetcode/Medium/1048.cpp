class Solution {
public:
    int longestStrChain(vector<string>& words) {
        sort(words.begin(), words.end(), [](const string& a, const string& b){
          return a.size()< b.size();
        });
        map<string, int> dp;
        int maxChain = 0;
        for(int i = 0; i<words.size(); i++){
          dp[words[i]] = 1;
          for(int j = 0; j<words[i].size(); ++j){
            string prev = words[i].substr(0, j) + words[i].substr(j+1);
            // cout << prev << endl;
            if(dp.find(prev) != dp.end()){
              dp[words[i]] = max(dp[words[i]], dp[prev]+1);
            }
          }
          maxChain = max(maxChain, dp[words[i]]);
        }
        return maxChain;
    }
};