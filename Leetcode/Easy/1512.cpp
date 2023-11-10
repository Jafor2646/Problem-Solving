#include <iostream>
#include<vector>
#include <map>
using namespace std;
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int, int> counter;
        for(int i = 0; i<nums.size(); i++){
            counter[nums[i]]++;
        }
        int count = 0;
        for(auto it: counter){
            if(it.second >1){
                count += ((it.second*(it.second-1))/2);
            }
        }
        return count;
    }
};