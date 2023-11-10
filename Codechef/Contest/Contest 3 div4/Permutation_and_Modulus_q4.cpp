#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i<t; i++){
	    int n;
	    cin >> n;
	    for(int j = 1; j<=n; j++){
	        if(j == n) cout << 1 << endl;
	        else cout << j+1 << " ";
	        
	    }
	}
	return 0;
}