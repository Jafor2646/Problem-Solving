class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> index;
        index.push(-1);
        int maxLen = 0;
        for(int i = 0;i<s.length();i++){
            if(s[i] == '('){
                index.push(i);
            }else{
                index.pop();
                if(index.empty()) index.push(i);
                else{
                    int len = i - index.top();
                    maxLen = max(maxLen, len);
                }
            }
        }
        return maxLen;
    }
};