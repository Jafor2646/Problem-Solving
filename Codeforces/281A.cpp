#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin >> s;
    if(int(s[0])>= int('a') && int(s[0]) <= int('z')){
        s[0] = char(int(s[0])-32);
    }
    cout << s;
    return 0;
}