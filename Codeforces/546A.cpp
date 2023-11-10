#include <iostream>
using namespace std;
int main(){
    int k{}, n{}, w{}, total{0};
    cin >> k >> n >> w;
    for(size_t i{1}; i<=w; i++){
        total += (i*k);
    }
    if(total>n){
        cout << total - n;
    }else{
        cout << 0;
    }
    return 0;
}