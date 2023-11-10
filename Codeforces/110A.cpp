#include <iostream>
using namespace std;
int main(){
    long long int n{}, count{0}, unit{};
    cin >> n;
    while(n>0){
        unit = n%10;
        if(unit == 4 || unit == 7){
            count++;
        }
        n /= 10;
    }
    if(count == 4 || count == 7){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}