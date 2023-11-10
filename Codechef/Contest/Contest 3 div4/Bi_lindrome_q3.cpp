#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i<t; i++){
	   int a;
	   cin >> a;
	   string s;
	   cin >> s;
	   bool temp = true;
	   for(int i = 0; i<s.length()-1; i++){
	       for(int j=i+1; j<s.length(); j++){
	           if(s[i] == s[j]){
	               temp = false;
	               break;
	           }
	       }
	   }
	   if(temp) cout << -1 << endl;
	   else cout << s.length()-2 << endl;
	}
	    
	
	return 0;
}