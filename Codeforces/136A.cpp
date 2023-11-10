#include <iostream>
using namespace std;
int main(){
    int n{},p{};
    cin >> n;
    int *ans = new int[n];
    for(int i = 1; i<n+1; i++){
        cin >> p;
        ans[p-1] = i;
    }
    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
    return 0;
}