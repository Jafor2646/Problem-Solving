#include <iostream>
using namespace std;
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n == 1) return true;
        if(n%2 == 1 || n<=0) return false;
        // int ans = 1;
        // while(ans<n){
        //     ans = ans << 2;
        // }
        // return ans == n;

        // double logarithm = log(n)/log(4);
        // return logarithm == (int) logarithm;

        return (n&n-1) == 0 && (n-1)%3==0;
    }
};