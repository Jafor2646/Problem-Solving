#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m, count = 0;
  cin >> n;
  int boys[n];
  for(int i = 0; i<n;i++){
    cin >> boys[i];
  }
  cin >> m;
  int girls[m];
  for(int i = 0;i<m;i++){
    cin >> girls[i];
  }
  sort(boys, boys+n);
  sort(girls, girls+m);
  for(int i = 0; i<n;i++){
    for(int j = 0; j<m;j++){
      if(girls[j] != -1 && abs(boys[i]-girls[j])<=1){
        count++;
        girls[j] = -1;
        break;
      }
    }
  }
  cout << count << endl;
  return 0;
}