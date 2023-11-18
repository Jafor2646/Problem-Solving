#include <bits/stdc++.h>
using namespace std;
int main(){
  size_t k1,k2,ktot,red; 
  size_t k;
  cin>>k;
  for(size_t n = 1; n<=k; n++){
    k1=n*n;              
    k2=k1-1;             
    ktot=k1*k2/2;       
    red=4*(n-1)*(n-2);  
    cout<<ktot-red << endl;
  }
        
  return 0;
}