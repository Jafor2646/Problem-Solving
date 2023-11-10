#include <iostream>
using namespace std;
int main(){
    int n;
    bool temp{false};
    cin >> n;
    for(int i = 0; i<n; i++){
        int a;
        cin >> a;
        if(a == 1){
            temp = true;
        }  
    }
    if(temp){
        cout << "HARD";
    }else{
        cout << "EASY";
    } 
}