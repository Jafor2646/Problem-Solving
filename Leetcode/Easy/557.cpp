#include <iostream>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        if(n == 0 || n == 1) return s;
        int i = 0;
        while(i < n){
            int j = i;
            while(j<n && s[j] != ' ') j++;
            int b = i, e = j-1;
            while(b<=e){
                char temp = s[b];
                s[b] = s[e];
                s[e] = temp;
                b++;
                e--;
            }
            i = j+1;
        }
        return s;
    }
};