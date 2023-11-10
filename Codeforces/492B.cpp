#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, l;
  cin >> n >> l;
  int a[n];
  for(int i = 0; i<n;i++){
    cin >> a[i];
  }
  cout.precision(20);
  if(n == 1){
    double temp = double(a[0]);
    double temp2 = double(l);
    if((temp-0)>(temp2-temp)){
      cout << fixed << temp-0 << endl;
    }else{
      cout << fixed << temp2-temp << endl;
    }
  }
  else{
    sort(a, a+n);
    int max = a[0]-0;
    int maxIdx = 0;
    for(int i = 0; i<n-1;i++){
      if((a[i+1] -a[i]) > max){
        max = a[i+1] -a[i];
        maxIdx = i;
      }
    }
    // if(maxIdx == 0){
    //   double temp;
    //   double temp1 = double(a[maxIdx]);
    //   double temp2 = double(a[maxIdx+1]);
    //   if((temp1-0)>((temp2-temp1)/2)){
    //     temp = temp1-0;
    //     cout << temp << endl;
    //   }else{
    //     temp = (temp2-temp1)/2;
    //     cout << temp << endl;
    //   }
    // }else if(maxIdx == n-1){
    //   double temp1 = double(a[maxIdx]);
    //   double temp2 = double(l);
    //   cout << (temp2-temp1)/2 << endl;
    // }else{
    //   double temp1 = double(a[maxIdx]);
    //   double temp2 = double(a[maxIdx+1]);
    //   double check = double(l);
    //   double check2 = double(a[n-1]);
    //   if((check-check2)>((temp2-temp1)/2)){
    //     cout << check-check2 << endl;
    //   }else{
    //     cout << (temp2-temp1)/2 << endl;
    //   }
    // }
    double num1 = double(a[0]);
    double num2 = double(a[maxIdx]);
    double num3 = double(a[maxIdx+1]);
    double num4 = double(a[n-1]);
    double num5 = double(l);
    double check1 = num1-0;
    double check2 = (num3-num2)/2;
    double check3 = num5-num4;
    if(check1>check2 && check1>check3){
      cout << fixed << check1 << endl;
    }else if(check2>check1 && check2>check3){
      cout << fixed << check2 << endl;
    }else{
      cout << fixed << check3 << endl;
    }
  }
  return 0;
}