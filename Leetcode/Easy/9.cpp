#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        // bool temp {false};
        // string var = to_string(x);
        // string check = string(var.rbegin(), var.rend());
        // if(var == check){
        //     temp = true;
        // }
        // return temp;
        if(x < 0 || (x != 0 && x%10 == 0)) return false;
        long long rev = 0;
        while(x > rev){
            int temp = x-10*(x/10);
            rev = rev*10 + temp;
            x /= 10;
        }
        if(rev == x || x == rev/10) return true;
        return false;
    }
};