#include <iostream>
#include <string>
#include <map>
using namespace std;
class Solution {
public:
    bool isFascinating(int n) {
        int n2 = n*2;
        int n3 = n*3;
        string s = to_string(n)+to_string(n2)+to_string(n3);
        map<char, int> store;
        bool flag = true;
        for(int i = 0; i< s.length(); i++){
            if(s[i] == '0'){
                flag = false;
                break;
            }
            store[s[i]]++;
            if(store[s[i]]>1){
                flag = false;
                break;
            }
        }
        return flag;
        
    }
};