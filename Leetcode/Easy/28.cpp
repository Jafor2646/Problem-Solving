#include <iostream>
#include <string>
#include<vector>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        // int n=0;
        // if(needle.size()<=haystack.size())
        // {
        // for(int i=0;i<=haystack.size()-needle.size();i++)
        // {
        //     if(haystack.substr(i,needle.size())==needle)
        //     {
        //         n=i;
        //         break;
        //     }
        //     else
        //     {
        //         n=-1;
        //     }
        // }
        // }
        // else
        // {
        //     n=-1;
        // }
        // return n;
        // int n = haystack.size();
        // int m = needle.size();
        // if(n<m) return -1;
        // for(int i =0; i<= n-m; i++){
        //     if(haystack.substr(i,m) == needle) return i;
        // }
        // return -1;

        vector<int> lps(needle.size(), 0);
        int pre = 0;
        for(int i = 1; i<needle.size(); i++){
            while(pre>0 && needle[i] != needle[pre]){
                pre = lps[pre-1];
            }
            if(needle[pre] == needle[i]){
                pre += 1;
                lps[i] = pre;
            }
        }
        int n = 0;
        for(int h = 0; h<haystack.size(); h++){
            while(n>0 && needle[n] != haystack[h]){
                n = lps[n-1];
            }
            if(needle[n] == haystack[h]) n += 1;
            if(n == needle.size()) return h-n +1;
        }
        return -1;
    }
};