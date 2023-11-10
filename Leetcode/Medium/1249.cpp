class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string ans="";
        stack<char>paren;
        stack<int>idx;
        set<int>set1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                paren.push('(');
                idx.push(i);
            }
            else if(s[i] == ')'){
                if(paren.empty())
                {
                    set1.insert(i);
                }
                else
                {
                    paren.pop();
                    idx.pop();
                }
            }
        }
        while(!idx.empty())
        {
            set1.insert(idx.top());
            idx.pop();
        }
        for(int i=0;i<s.size();i++)
        {
            if(!set1.count(i))
            {
                ans+=s[i];
            }
        }
        return ans;
        
    }
};