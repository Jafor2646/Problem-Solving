#include <iostream>
#include <string>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector <int> store;
        store.push_back(1);
        int prev = 1;
        for(size_t i = 1; i<=rowIndex; i++){
            size_t curr = (prev * (rowIndex - i + 1)) / i;
            store.push_back(curr);
            prev = curr;
        }
        return store;
    }
};