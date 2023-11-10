#include <iostream>
using namespace std;
class Solution {
public:
    string reverseStr(string s, int k) {
        if(s.length() < 2) return s;
        int n = 2*k;
        for(int i = 0; i<s.length(); i += n){
            int b = i, e = i+k-1;
            if(e >= s.length()) e = s.length()-1;
            while(b<=e){
                char temp = s[b];
                s[b] = s[e];
                s[e] = temp;
                b++;
                e--;
            }
        }
        return s;
    }
};