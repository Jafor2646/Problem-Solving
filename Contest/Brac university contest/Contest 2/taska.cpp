#include <bits/stdc++.h>
using namespace std;
int main(){
  size_t n;
  cin >> n;
  size_t arr[n];
  for(size_t i = 0; i<n; i++){
    cin >> arr[i];
  }
  sort(arr, arr+n, greater<int>());
  size_t sum = arr[0];
  size_t temp = arr[0];
  for(size_t i = 1; i<n;i++){
    size_t x = arr[i]*(i+1);
    if(x>=sum){
      sum = x;
      temp = arr[i];
    }
  }
  cout << sum << " " << temp << endl;
  return 0;
}