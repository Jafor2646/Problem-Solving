#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin >> s;
    if(s.length() < 7) cout << "NO" << endl;
    else{
        int max = 1, count = 1;
        for(int i = 0; i < s.length()-1; i++){
            if(s[i] == s[i+1]) count++;
            else{
                if(count>max){
                    max = count;
                }
                count = 1;
            }
        }
        if(count>max) max = count;
        if(max >= 7) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}