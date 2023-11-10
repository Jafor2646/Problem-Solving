#include <iostream>
#include <string>
using namespace std;
int main(){
    int n{}, count{0};
    cin >> n;
    string s{};
    cin >> s;
    for(size_t i{0}; i < s.length()-1;i++){
        if(s[i] == s[i+1]){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}