#include <iostream>
using namespace std;
int main(){
    int n, h, width{0};
    cin >> n >> h;
    int *arr = new int[n];
    for(size_t i{0}; i<n; i++){
        cin >> arr[i];
    }
    for(size_t i{0}; i<n; i++){
        if(arr[i]>h){
            width += 2;
        }else{
            width++;
        }
    }
    cout << width;

    return 0;
}