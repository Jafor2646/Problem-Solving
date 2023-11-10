#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  for(int i = 0; i<t; i++){
    int l;
    cin >> l;
    int max = 0;
    int count = 1;
    for(int j = 0; j < l; j++){
      int a, b;
      cin >> a >> b;
      if(a <= 10){
        if(b > max){
          max = b;
          count = j+1;
        }
      }
    }
    cout << count << endl;
  }
  return 0;
}