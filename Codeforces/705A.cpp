#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    string s;
    cin >> n;
    for(int i = 1; i<=n; i++){
        if(i%2==1 && i == n){
            s += "I hate it";
        }else if(i%2 == 0 && i == n){
            s += "I love it";
        }else if(i%2 == 0){
             s += "I love that ";
        }else{
            s += "I hate that ";
        }
    }
    cout << s << endl;
    return 0;
}