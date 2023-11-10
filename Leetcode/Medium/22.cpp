class Solution {
public:
    void util(vector<string>& res, int open, int close, string& temp1, int n){
        if(temp1.length()==2*n) {res.push_back(temp1); return;}
        if(open<n){
            temp1.push_back('(');
            util(res,open+1,close,temp1,n);
            temp1.pop_back();
        }
        if(close<open){
            temp1.push_back(')');
            util(res,open,close+1,temp1,n);
            temp1.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        int open=0,close=0;
        vector<string> res;
        if(n==0) return res;
        string temp="";
        util(res,open,close,temp,n);
        return res;
    }
};