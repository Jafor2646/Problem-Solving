#include <iostream>
#include <string>
#include<vector>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        // string front = "";
        // string back = "";
        // int n = s.length();
        // for(int i = 0; i < n; i++){
        //     if((int(s[i])>=65 && int(s[i])<=90) || (int(s[i])>=97 && int(s[i])<=122) || (int(s[i])>=48 && int(s[i])<=57)){
        //         if(int(s[i])>=65 && int(s[i])<=90){
        //             char temp = char(int(s[i])+32);
        //             front += temp;
        //         }
        //         else front += s[i];
        //     }
        // }
        // for(int i = n-1; i >= 0; i--){
        //     if((int(s[i])>=65 && int(s[i])<=90) || (int(s[i])>=97 && int(s[i])<=122) || (int(s[i])>=48 && int(s[i])<=57)){
        //         if(int(s[i])>=65 && int(s[i])<=90){
        //             char temp = char(int(s[i])+32);
        //             back += temp;
        //         }
        //         else back += s[i];
        //     }
        // }
        // cout << front << endl;
        // cout << back << endl;
        // return (front == back);
        for (int i = 0, j = s.size() - 1; i < j; i++, j--) {
        while (isalnum(s[i]) == false && i < j) i++;
        while (isalnum(s[j]) == false && i < j) j--; 
        if (toupper(s[i]) != toupper(s[j])) return false; 
    }
    
    return true;
    }
};