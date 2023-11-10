#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  for(int i = 0; i< t; i++){
    vector<string> store = {};
    for(int j = 0; j<8; j++){
      string s = "";
      for(int k = 0; k < 8; k++){
        char a;
        cin >> a;
        s += a;
      }
      store.push_back(s);
    }
    // cout << "...printing start...." << endl;
    // for(int j = 0; j < 8; j++){
    //   for(int k = 0; k < 8; k++){
    //     cout << store[j][k] << " ";
    //   }
    //   cout << endl;
    // }
    // cout << "...printing end...." << endl;
    int r = 0, c = 0;
    bool temp = false;
    for(int j = 0; j<8; j++){
      for(int k = 0; k<8; k++){
        if(store[j][k] != '.'){
          r = j;
          c = k;
          temp = true;
          break;
        }
      }
      if(temp){
        break;
      }
    }
    string output = "";
    for(int j = r; j < 8; j++){
      if(store[j][c] == '.'){
        break;
      }
      output += store[j][c];
    }
    cout << output << endl;
  }
  return 0;
}