#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    vector <char> store {};
    bool temp{true};
    int count{0};
    string s;
    cin >> s;
    for(size_t i{0}; i < s.size(); i++){
        for(size_t j{0}; j<store.size(); j++){
            if(s[i] == store[j]){
                temp = false;
                break;
            }
        }
        store.push_back(s[i]);
        if(temp){
            count++;
        }
        temp = true;
    }
    if(count%2 == 0 && count != 0){
        cout << "CHAT WITH HER!" << endl;
    }else{
        cout <<"IGNORE HIM!" << endl;
    }
    return 0;
}