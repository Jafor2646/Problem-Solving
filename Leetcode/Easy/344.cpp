#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        if(n < 2) return;
        int b = 0, e = n-1;
        while(b<=e){
            char temp = s[b];
            s[b] = s[e];
            s[e] = temp;
            b++;
            e--;
        }
    }
};