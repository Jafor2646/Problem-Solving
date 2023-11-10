class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        vector<int> position(128, -1);
        int ans = 0;   
        for(int i = 0, j = 0; j < n; j++){
            if(position[s[j]] != -1){
                i = max(i, position[s[j]]+1);
            }
            cout << i << endl;
            ans = max(ans, j-i+1);
            cout << s[j] << ": " << position[s[j]] << endl;
            position[s[j]] = j;
            cout << s[j] << ": " << position[s[j]] << endl;
        }
        
        return ans;
    }
};