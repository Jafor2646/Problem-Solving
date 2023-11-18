#include <iostream>
using namespace std;
int main(){
  long long int n;
  cin >> n;
  long long int arr[n];
  for(size_t i = 0; i<n; i++){
    cin >> arr[i];
  }
  long long int count = 0;
  for(size_t i = 1; i<n; i++){
    if(arr[i] < arr[i-1]){
      int t = arr[i-1] - arr[i];
      count += t;
      arr[i] += t;
    }
  }
  cout << count << endl;
  return 0;
}