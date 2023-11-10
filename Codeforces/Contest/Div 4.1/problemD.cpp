#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  for(int i = 0; i < t; i++){
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int j = 0; j<n; j++){
      cin >> arr[j];
    }
    sort(arr, arr+n);
    vector<int>check = {};
    for(int j = 0; j<n-1; j++){
      if((arr[j+1]-arr[j]) > k){
        check.push_back(j+1);
      }
    }
    if(check.size() == 0){
      cout << 0 << endl;
    }else if(check.size() == 1){
      if(check[0]<(n-check[0])){
        cout << check[0] << endl;
      }else{
        cout << n-check[0] << endl;
      }
    }else{
      if((n-check[0])>(check[check.size()-1])){
        cout << check[check.size()-1] << endl;
      }else{
        cout << n-check[0] << endl;
      }
    }
  }
  return 0;
}