#include<bits/stdc++.h>
#include <map>
using namespace std;
int main(){
  int n;
  cin >> n;
  map <string, int> m;
  for(int i = 0; i<n; i++){
    string s;
    cin >> s;
    m[s]++;
    if(m[s]==1){
      cout << "OK" << endl;
    }else{
      string k = s+to_string(m[s]-1);
      cout << k << endl;
    }
  }
  return 0;
}