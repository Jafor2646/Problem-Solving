#include <iostream>
using namespace std;
int main(){
    int n{}, k{};
    cin >> n >> k;
    for(size_t i{0}; i<k; i++){
        if(n < 1){
            break;
        }
        if(n%10==0){
            n /= 10;
        }else{
            n -= 1;
        }
    }
    cout << n;
    return 0;
}