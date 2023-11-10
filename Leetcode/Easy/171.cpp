#include <iostream>
#include <string>
#include<vector>
using namespace std;
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;
        for(int i = 0; i<columnTitle.length(); i++){
            int t = columnTitle[i]-'A'+1;
            ans = ans*26+t;
        }
        return ans;
    }
};