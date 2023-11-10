#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main(){
    int countL{0}, countU{0};
    string s{};
    cin >> s;
    for(size_t i{0}; i < s.length(); i++){
        if(int(s[i])>=int('a') && int(s[i])<=int('z')){
            countL++;
        }else if(int(s[i])>=int('A') && int(s[i])<=int('Z')){
            countU++;
        }
    }
    if(countU>countL){
        for(size_t i{0}; i<s.length();i++){
            if(int(s[i])>=int('a') && int(s[i])<=int('z')){
            s[i] = char(int(s[i])-32);
            }else if(int(s[i])>=int('A') && int(s[i])<=int('Z')){
            continue;
            }
        }
    }else{
        for(size_t i{0}; i<s.length();i++){
            if(int(s[i])>=int('A') && int(s[i])<=int('Z')){
            s[i] = char(int(s[i])+32);
            }else if(int(s[i])>=int('a') && int(s[i])<=int('z')){
            continue;
            }
        }
    }
    cout << s;
    return 0;
}