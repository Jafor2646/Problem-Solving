#include<bits/stdc++.h>
using namespace std;
// void kthNonDivisible(int N, int K){
//   int L = 1;  
//   int H = N*K;
//   int ans = 0;
//   while (L <= H){
//       int mid = (L + H) / 2;
//       int sol = mid - mid / N;
//       if (sol > K){
//           H = mid - 1;
//       }else if (sol < K){
//           L = mid + 1;
//       }else{ 
//           ans = mid;
//           H = mid - 1;
//       }
//   }
//   cout << ans << endl;
// }
int main(){
  int t;
  cin >> t;
  for(int i = 0; i<t; i++){
    int n, k;
    cin >> n >> k;
    //kthNonDivisible(n, k);
    cout << ((k-1)/(n-1))+k << endl;
  }
  return 0;
}