#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c, store;
    cin >> a >> b >> c;
    store = a*b*c;
    store = max(store, (a+b+c));
    store = max(store, (a+b)*c);
    store = max(store, a+(b*c));
    store = max(store, (a*(b+c)));
    store = max(store, (a*b)+c);
    cout << store << endl;
    
    return 0;
}