#include <iostream>
#include <string>
#include<vector>
using namespace std;
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans;
        while(columnNumber){
            columnNumber--;            
            ans = (char)(columnNumber%26 + 'A')+ans;
            columnNumber /= 26;
        }
        return ans;
    }
};