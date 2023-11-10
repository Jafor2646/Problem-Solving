#include <iostream>
#include <map>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
         map <char, int> ransom;
        map <char, int> mag;
        bool temp = true;
        for(int i = 0; i<s.length(); i++){
            if(!ransom[s[i]]) ransom[s[i]] = 1;
            else ransom[s[i]]++;
        }
        for(int i = 0; i<t.length(); i++){
            if(!mag[t[i]]) mag[t[i]] = 1;
            else mag[t[i]]++;
        }
        for(auto i : ransom){
            auto a = mag.find(i.first);
            if(a == mag.end() || a->second != i.second){
                temp = false;
                break;
            }
        }
        return temp;
        
    }
};