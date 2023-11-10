#include <iostream>
#include <string>
#include<vector>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs){
        string temp {strs[0]};
        for(size_t i{1}; i < strs.size(); i++){
            if(strs[i].length()<temp.length()){
                temp.erase(strs[i].length(), temp.length());
            }
            for(size_t c{0}; c < temp.length(); c++){
                if(temp[c] != strs[i][c]){
                    temp.erase(c);
                }
            }
            if(temp.length() == 0) break;
        }
        return temp;
    }
};