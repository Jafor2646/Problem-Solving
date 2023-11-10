#include <iostream>
using namespace std;
class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry=0;
        int i=num1.length()-1;
        int j=num2.length()-1;
        string ans;
        char a,b;
        int x,y;
        while(1){
            if(i<0&&j<0&&carry==0){
                break;
            }
            if(i<0){
                x=0;
            }else{
                a=num1[i];
                x=a-'0';
            }
            if(j<0){
                y=0;
            }else{
                b=num2[j];
                y=b-'0';
            }
            int result=x+y+carry;
            carry=result/10;
            result=result%10;
            ans.push_back(result+'0');
            i--;
            j--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};