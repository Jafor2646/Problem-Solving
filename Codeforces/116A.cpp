#include <iostream>
using namespace std;
int main(){
    int n{}, max{0}, temp{0};
    cin >> n;
    for(size_t i{0}; i<n; i++){
        int a{}, b{};
        cin >> a >> b;
        temp -= a;
        temp += b;
        if(temp>max){
            max = temp;
        }
    }
    cout << max;
    return 0;
}