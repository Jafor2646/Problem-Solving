#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
	    int n, x, y, total; 
	    cin >> n >> x >> y;
	    total = x*y;
	    if(total >= n) cout << "YES" << endl;
	    else cout << "NO" << endl;
	}
	return 0;
}