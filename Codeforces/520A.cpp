#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main(){
    int n {};
    string s{};
    cin >>n;
    cin >> s;
    if(n<26) cout << "NO" << endl;
    else{
        vector <char> store;
        bool temp = true;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        store.push_back(s[0]);
        for(int i = 1; i<s.length();i++){
            temp = true;
            for(int j = 0; j<store.size();j++){
                if(s[i] == store[j]){
                    temp = false;
                    break;         
                }
            }
            if(temp){
                store.push_back(s[i]);
            }
        }
        if(store.size() == 26){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
