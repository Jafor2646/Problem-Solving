#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i<t; i++){
	    int n;
	    cin >> n;
	    int *arr = new int[n];
	    for(int j = 0; j<n; j++){
	        if(j%2==0) arr[j] = 2;
	        else arr[j] = 1;
	    }
	    for(int j = 0; j<n; j++){
	        cout << arr[j] << " ";
	    }
	}
	return 0;
}