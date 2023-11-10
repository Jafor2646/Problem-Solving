#include <iostream>
#include <string>
using namespace std;
int main(){
    string s, t;
    cin >> s;
    cin >> t;
    if(s.length() != t.length()){
        cout << "NO";
    }else{
        bool temp{true};
        for(size_t i{0}; i<s.length(); i++){
            if(s[i] != t[s.length()-i-1]){
                temp = false;
                break;
            }
        }
        if(temp){
            cout << "YES";
        }else{
            cout << "NO";
        }
    }
    return 0;
}