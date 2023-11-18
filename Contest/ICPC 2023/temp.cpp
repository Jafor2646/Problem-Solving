#include <bits/stdc++.h>

using namespace std;

void printArr(vector<int> &arr){
  for(int i = 0; i< arr.size(); i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}
void print(int arr[], int size){
  for(int i = 0; i<size; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}


int main(){
  int n=4;
  int arr[4];
  for(int i = 0; i<n; i++){
    cout >> arr[i];
  }
  vector <int> num(n);
  for(int i = 0; i< num.size();i++){
    cin >> num[i];
  }
  char s[25];
  cin.getline(s, 25);
  cout << s << endl;
  return 0;
}