#include <iostream>
#include <string>
#include<vector>
using namespace std;
class Solution {
public:
    int mySqrt(int x) {
        size_t temp = 0;
        for(size_t i=1; i<=x; i++){
            if((i*i) == x){
                temp = i;
                break;
            }else if((i*i)>x){
                temp = i-1;
                break;
            }
        }
        return temp;
    }
};