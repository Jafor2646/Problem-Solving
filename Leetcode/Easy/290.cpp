#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> store;
        string temp = "";
        for(int i = 0; i<s.length();i++){
            if(s[i] == ' '){
                store.push_back(temp);
                temp = "";
            }else{
                temp += s[i];
            }
        }
        store.push_back(temp);
        map<char, string> m;
        set<string> storage;
        if(pattern.length() != store.size()) return false;
        for(int i = 0; i<pattern.length();i++){
            if(m.find(pattern[i]) == m.end()){
                m[pattern[i]] = store[i];
                if(storage.find(store[i]) == storage.end()){
                    storage.insert(store[i]);
                }else{
                    return false;
                }
            }else{
                auto it = m.find(pattern[i]);
                if(it->second != store[i]) return false;
            }
        }
        return true;
    }
};