#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        int countZero = 0;
        int countOne = 0;
        string s;
        cin >> n;
        cin >> s;
        for(int j = 0; j<s.length();j++){
            if(s[j] == '0') countZero++;
            else countOne++;
        }
        if(countZero == 0){
            cout << 1 << endl;
            continue;
        }
        if(countOne == 0){
            cout << 0 << endl;
            continue;
        }
        if(countZero < countOne){
            cout << countZero+1 << endl;
        }else{
            cout << countOne << endl;
        }
    }
	return 0;
}