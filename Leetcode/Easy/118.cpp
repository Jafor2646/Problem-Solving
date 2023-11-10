#include <iostream>
#include <string>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector <vector<int>> pascal;
        for(int i = 0; i < numRows; i++){
            vector <int> temp;
            if(i==0){
                temp.push_back(1);
                pascal.push_back(temp);
            }else{
                temp.push_back(1);
                for(int j = 0; j<pascal[i-1].size()-1;j++){
                    temp.push_back(pascal[i-1][j]+pascal[i-1][j+1]);
                }
                temp.push_back(1);
                pascal.push_back(temp);
            }
        }
        return pascal;
    }
};