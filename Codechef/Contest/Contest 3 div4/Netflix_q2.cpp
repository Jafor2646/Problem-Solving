#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i<t; i++){
	    int a, b, c, x;
	    cin >> a >> b >> c >> x;
	    if(a+b >= x || a+c >= x || b+c >= x) cout << "YES" << endl;
	    else cout << "NO" << endl;
	}
	
	return 0;
}