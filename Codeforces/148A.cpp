#include <iostream>
using namespace std;
int main(){
    int k, l, m, n, d, temp;
    cin >> k;
    cin >> l;
    cin >> m;
    cin >> n;
    cin >> d;
    temp = d;
    for(int i = 1; i<= d; i++){
        if(i%k==0) temp -= 1;
        else if(i%l==0) temp -= 1;
        else if(i%m==0) temp -= 1;
        else if(i%n==0) temp -= 1;
    }
    cout << d - temp;
    return 0;
}