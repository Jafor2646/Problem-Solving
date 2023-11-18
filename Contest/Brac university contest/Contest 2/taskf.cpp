#include <bits/stdc++.h>
using namespace std;
int main(){
  size_t n;
  cin >> n;
  int p1 = 100;
  int p2 = 100;
  for(size_t i = 0; i<n; i++){
    size_t x, y;
    cin >> x >> y;
    if(x<y){
      p1 -= y;
    }else if( y<x){
      p2 -= x;
    }
  }
  cout << p1 << endl;
  cout << p2 << endl;
  return 0;
}