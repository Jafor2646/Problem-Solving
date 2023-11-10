#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        if(bits.size() == 1){
            if(bits[0] == 0) return true;
            return false;
        } 
        int i = 0;
        while(i < bits.size()){
            if(i == bits.size()-1){
                if(bits[i] == 0) return true;
                return false;
            }
            else if(i < bits.size() && (i+1) < bits.size()){
                if(bits[i] == 1){
                    i += 2;
                }else{
                    i++;
                }
            }
        }
        return false;
    }
};