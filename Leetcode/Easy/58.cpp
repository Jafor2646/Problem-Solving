#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int count{0};
        int temp{0};
        for(int i = s.length()-1; i>=0; i--){
            if(temp == 0 && s[i] == ' '){
                continue;
            }
            if(s[i] != ' '){
                temp = 1;
                count++;
            }else{
                break;
            }
        }
        return count;
    }
};