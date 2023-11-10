#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<char> ans1, ans2;
        for(char c: s){
            if(c == '#' && !ans1.empty()) ans1.pop_back();
            else if((c - 'a') >= 0 && ('z' - c) <= 25) ans1.push_back(c);
        }
        // for(auto c : ans1){
        //     cout << c << " ";
        // }
        cout << endl;
        for(char c : t){
            if(c == '#' && !ans2.empty()) ans2.pop_back();
            else if((c - 'a') >= 0 && ('z' - c) <= 25) ans2.push_back(c);
        }
        // for(auto c: ans2){
        //     cout << c << " ";
        // }
        // cout << endl;
        return ans1==ans2;
    }
};