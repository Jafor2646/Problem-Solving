#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int count = 1; 
    int max = 1;
    for(int i = 0; i<n-1; i++){
        if(arr[i+1] >= arr[i]) count++;
        else{
            if(count > max) max = count;
            count = 1;
        }
    }
    if(count>max) max = count;
    cout << max << endl;
    return 0;
}