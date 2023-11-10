#include <iostream>
#include <string>
using namespace std;
int main(){
    int n{}, anton{0}, danik{0};
    string s{};
    cin >> n;
    cin >> s;
    for(size_t i{0}; i<s.length();i++){
        if(s[i]=='A'){
            anton++;
        }else{
            danik++;
        }
    }
    if(anton>danik){
        cout << "Anton";
    }else if(danik>anton){
        cout << "Danik";
    }else{
        cout << "Friendship";
    }
    
    return 0;
}