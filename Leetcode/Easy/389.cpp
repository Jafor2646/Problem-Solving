#include <iostream>
using namespace std;
class Solution {
public:
    
    char findTheDifference(string s, string t) {
        // if(s.length() == 0) return t[0];
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // for(int i = 0; i<t.length(); i++){
        //     if(i == t.length()-1){
        //         return t[i];
        //     }
        //     if(s[i] != t[i]){
        //         return t[i];
        //     }
        // }
        // return 'a';

        for(int i=0;i<s.size();i++)
		t[i+1]+=t[i]-s[i]; 
      return t[t.size()-1];
    }
};