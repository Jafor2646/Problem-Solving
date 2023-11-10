#include <iostream>
using namespace std;
int main(){
    double n, sum{0}, a;
    cin >> n;
    for(double i{0}; i<n;i++){
        cin >> a;
        sum += a;
    }
    cout << sum/n << endl;

    return 0;
}