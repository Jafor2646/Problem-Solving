#include <iostream>
#include <string>
using namespace std;

int main(){
    int n{}, x{0};
    string temp{};
    cin >> n;
    for(size_t i{0}; i < n; i++){
        cin >> temp;
        if (temp[1] == '+'){
            x++;
        }else if(temp[1] == '-'){
            x--;
        }
        
    }
    cout << x;
    return 0;
}