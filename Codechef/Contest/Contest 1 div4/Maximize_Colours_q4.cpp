#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int a, b, c;
	    cin>>a>>b>>c;
	   vector<int>v={a,b,c};
	   int cont=0;
       for(int i=0;i<v.size();i++){
           if(v[i]>0)
           {
               cont++;
               v[i]--;
           }
       }
      sort(v.begin(),v.end(),greater<int>());
      //cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;
      if(v[0]>0 && v[1]>0){
        cont++;
        v[0]--;
        v[1]--;
      }
      if(v[0]>0 && v[2]>0){
        cont++;
        v[0]--;
        v[2]--;
      }
      if(v[1]>0 && v[2]>0){
        cont++;
        v[1]--;
        v[2]--;
      }
       cout<<cont<<endl;
	}
	
	return 0;
}
