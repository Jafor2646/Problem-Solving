class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int> lastIdx(26, 0);
        vector<bool> visited(26, false);
        stack<char> store;
        string ans;
        for(int i = 0; i<s.length(); i++){
            lastIdx[s[i] - 'a'] = i;
        }
        for(int i = 0; i<s.length(); i++){
            int curr = s[i] - 'a';
            if(visited[curr]) continue;
            while(store.size() > 0 && store.top() > s[i] && i < lastIdx[store.top() - 'a']){
                visited[store.top() - 'a'] = false;
                store.pop();
            }
            store.push(s[i]);
            visited[curr] = true;
        }
        while(!store.empty()){
            ans = store.top()+ans;
            store.pop();
        }
        return ans;
    }
};