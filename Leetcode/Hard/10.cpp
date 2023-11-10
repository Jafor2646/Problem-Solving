class Solution {
public:
    bool isMatch(string s, string p) {
        // if(s.length() > p.length()) return false;
        // int temp1 = s.length();
        // int temp2 = p.length();
        // bool temp = false;
        // int i = 0;
        // int j = 0;
        // while(i<temp2){
        //     if(s[j] == p[i]){
        //         temp = true;
        //     }
        //     else if(p[i] == '.') temp = true;
        //     else if(p[i] == '*'){
        //         if(s[j] == p[i-1]) temp = true;
        //         else if(p[i-1] == '.') temp = true;
        //         else if(temp2>temp1+1){
        //             temp = true;
        //             temp1 -= 2;
        //             j -= 2;
        //         }else temp = false;
        //     }else{
        //         temp = false;
        //     }
        //     i++;
        //     j++;
        // }
        // return temp;
        // if(s.length()>p.length()) return false;
        // string store;
        // int i = s.length()-1;
        // int j = p.length()-1;
        // while(i>=0){
        //     if(s[i] == p[j]){
        //         store += s[i];
        //     }else if(p[j] == '.'){
        //         store += s[i];
        //     }else if(p[j] == '*'){
        //         if(s[i] == p[j-1] || p[j-1] == '.'){
        //             store += s[i];
        //         }else{
        //             i++;
        //         }
        //     }else{
        //         if(j == p.length()-1 || p[j+1] != '*'){
        //             store += p[j];
        //         }else{
        //             i++;
        //         }
        //     }
        //     i--;
        //     j--;
        // }

        // reverse(store.begin(), store.end());
        // cout << store << endl;
        // return (s == store && j == i) ? true : false;
        vector<vector<int>> dp(p.size()+1, vector<int>(s.size()+1, 0));
        dp[0][0] = 1; 
        int i = 0, j = 0;
        for (i = 1; i <= p.size(); ++i) {
            dp[i][0] = (p[i] == '*'||p[i-1]=='*'?dp[i-1][0]:0);
            for (j = 1; j <= s.size(); ++j) {
                if (p[i] == '*') {
                    if (p[i-1] == s[j-1]||p[i-1]=='.')
                        dp[i][j] = dp[i][j-1]||dp[i-1][j]||dp[i-1][j-1];
                    else 
                        dp[i][j] = dp[i-1][j];
                } else if (p[i-1] =='*') {
                    dp[i][j] = dp[i-1][j];
                } else {
                    dp[i][j] = (p[i-1] == s[j-1]||p[i-1]=='.' ? dp[i-1][j-1]:0);
                }
            }
        }
        return dp[p.size()][s.size()];
    }
};