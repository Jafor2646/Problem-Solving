#include <iostream>
#include <map>
#include <vector>
using namespace std;

void solve(){
        int n,turn=1;
     cin>>n;
     vector<int>arr;
     map<int, int, greater<int>>mp;
     int temp;
     for(int i=0; i<n; i++){
         cin>>temp;
         arr.push_back(temp);
     }
     for(auto i : arr)
       mp[i]++;
     for(auto it:mp)
         if(it.second%2){
             turn=0;
             break;
         }
     if(turn)
        cout<<"Zenyk"<<endl;
     else
        cout<<"Marichka"<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}