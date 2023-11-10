#include <iostream>
#include <string>
using namespace std;

int main(){
    int n {};
    cin >> n;
    for(size_t i{0}; i < n; i++){
        string store {};
        string s {};
        cin >> s;
        if(s.length() <= 10){
            cout << s << endl;
        }else{
            string num {to_string(s.length()-2)};
            store = s[0] + num + s[s.length() - 1];
            cout << store << endl;
        }
    }
    return 0;
}