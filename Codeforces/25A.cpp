#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  int countEven = 0, countOdd = 0;
  int a[n];
  for (size_t i = 0; i < n; i++){
    cin >> a[i];
    if(a[i]%2==0){
      countEven++;
    }
    else{
      countOdd++;
    }
  }
  if(countEven == 1){
    for(int i = 0; i<n;i++){
      if(a[i]%2==0){
        cout << ++i << endl;
      }
    }
  }else{
    for(int i = 0; i<n;i++){
      if(a[i]%2==1){
        cout << ++i << endl;
      }
    }
  }
  return 0;
}