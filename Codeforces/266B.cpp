#include <iostream>
#include <string>
using namespace std;
int main(){
    int n{}, t{};
    string s{};
    cin >> n >> t;
    cin >> s;
    for(size_t i{0}; i<t; i++){
        int j{0};
        while(j<s.length()){
            if(s[j]=='B' && s[j+1]=='G'){
                s[j] = 'G';
                s[j+1] = 'B';
                j += 2;
            }else{
                j++;
            }
        }
    }
    cout << s;
    return 0;
}