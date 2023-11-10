// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     string s, n;
//     cin >> s;
//     for(int i = 0; i<s.length();i++){
//         if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ) continue;
//         else if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' ) continue;
//         else{
//             if(int(s[i]) >= int('a') && int(s[i]) <= int('z')){
//                 n += '.';
//                 n += s[i];
//             }
//             else{
//                 char temp = char(int(s[i]+32));
//                 n += '.';
//                 n += temp;
//             }
//         }
//     }
//     cout << n << endl;
//     return 0;
// }
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string s;
	cin>>s;
	string result;
	for(int i=0;i<s.size();i++){
	    char ch=tolower(s[i]);
	    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='y'){
	       continue; 
	    }else{
	       cout<<"."<<ch;
	    }
	}
	cout<<result;
	return 0;
}