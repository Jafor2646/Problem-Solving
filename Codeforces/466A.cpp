#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, m, a, b;
  cin >> n >> m >> a >> b;
  int costOfRide = (n/m)*b;
  int temp = n%m;
  temp*= a;
  costOfRide += temp;
  int costOfMRide = (n%m==0) ? (n/m)*b : ((n/m)+1)*b;
  int costOfOneRide = a*n;
  int ans;
  if(costOfMRide <= costOfRide && costOfMRide <= costOfOneRide){ans = costOfMRide;} 
  else if(costOfRide <= costOfMRide && costOfRide <= costOfOneRide) {ans = costOfRide;}
  else {ans = costOfOneRide;}
  cout << ans << endl;
  return 0;
}