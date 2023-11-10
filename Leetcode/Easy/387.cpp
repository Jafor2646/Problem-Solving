#include <iostream>
using namespace std;
class Solution {
public:
    int firstUniqChar(string s) {
        // unordered_map <char, int> m;
        // for(int i = 0; i<s.length();i++){
        //     cout << s[i] << " ";
        //     if(!m[s[i]]) m[s[i]] = 1;
        //     else m[s[i]]++;
        // }
        // cout << endl;
        // char a = '#';
        // for(auto i : m){
        //     cout << i.first << " " << i.second << endl;
        //     if(i.second == 1){
        //         a = i.first;
        //     }
        // }
        // if(a == '#') return -1;
        // else{
        //     for(int i = 0; i<s.length();i++){
        //         if(s[i] == a) return i;
        //     }
        // }
        // return -1;
        for(int i = 0; i<s.length();i++){
            bool temp = true;
            for(int j = 0; j<s.length(); j++){
                if(i==j)continue;
                if(s[i] == s[j]){
                    temp = false;
                    break;
                }
            }
            if(temp){
                return i;
            }
        }
        return -1;
    }
};