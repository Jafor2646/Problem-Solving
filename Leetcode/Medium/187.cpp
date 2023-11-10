class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        map<string, int> m;
        vector<string> store;
        if(s.length()<10) return store;
        for(int i = 0; i<=s.length()-10;i++){
            string temp = s.substr(i,10);
            m[temp]++;
        }
        for(auto it: m){
            if(it.second>1) store.push_back(it.first);
        }
        return store;
    }
};