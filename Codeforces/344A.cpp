#include <iostream>
#include <string>
using namespace std;
int main(){
    int n{}, count{1};
    string store{}, a{};
    cin >> n;
    cin >> a;
    store += a;
    for(int i = 1; i<n; i++){
        cin >> a;
        if(store[store.length()-1] == a[0]){
            count++;
        }
        store += a;
    }
    cout<< count << endl;
    return 0;
}