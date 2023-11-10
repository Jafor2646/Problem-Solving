#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> in_degree(n+1, 0);
        vector<int> out_degree(n+1, 0);
        for(int i = 0; i< trust.size(); i++){
            in_degree[trust[i][1]]++;
            out_degree[trust[i][0]]++;
        }
        int idx = -1;
        for(int i = 1; i < in_degree.size(); i++){
            if(in_degree[i] == n-1){
                if(out_degree[i] == 0){
                    idx = i;
                    break;
                }
            }
        }
        return idx;
    }
};