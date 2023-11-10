#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        int n = s.size();
        for(int i = (n-1); i >= 0; i--){
            if(s[i] == 'I'){
                if(((i+1) != n) && (s[i+1] == 'V' || s[i+1] == 'X')){
                    continue;
                }else{
                    sum += 1;   
                }
            }
            else if(s[i] == 'V'){
                if((i != 0) && s[i-1] == 'I'){
                    sum += 4;
                    if((i-1) == 0){
                        break;
                    }
                }else{
                    sum += 5;
                }
            }
            else if(s[i] == 'X'){
                if(((i+1) != n) && (s[i+1] == 'L' || s[i+1] == 'C')){
                    continue;
                }else{
                    if((i != 0) && s[i-1] == 'I'){
                        sum += 9;
                        if((i-1) == 0){
                            break;
                        }
                    }else{
                        sum += 10;   
                    }
                }
                
            }
            else if(s[i] == 'L'){
                if((i != 0) && s[i-1] == 'X'){
                    sum += 40;
                    if((i-1) == 0){
                        break;
                    }
                }else{
                    sum += 50;   
                }
            }
            else if(s[i] == 'C'){
                if(((i+1) != n) && (s[i+1] == 'D' || s[i+1] == 'M')){
                    continue;
                }else{
                    if((i != 0) && s[i-1] == 'X'){
                        sum += 90;
                    }else{
                        sum += 100;   
                    }
                }
            }
            else if(s[i] == 'D'){
                if((i != 0) && s[i-1] == 'C'){
                    sum += 400;
                    if((i-1) == 0){
                        break;
                    }
                }else{
                    sum += 500;   
                }
            }
            else if(s[i] == 'M'){
                if((i != 0) && s[i-1] == 'C'){
                    sum += 900;
                    if((i-1) == 0){
                        break;
                    }
                }else{
                    sum += 1000;   
                }
            }
        }
        return sum; 
    }
};