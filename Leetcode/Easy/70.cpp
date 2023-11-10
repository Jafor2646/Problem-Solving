#include <iostream>
#include <string>
#include<vector>
using namespace std;
class Solution {
 public:
  int climbStairs(int n) {
    int temp1 = 1;
    int temp2 = 1;

    for (int i = 2; i <= n; ++i) {
      const int step = temp1 + temp2;
      temp2 = temp1;
      temp1 = step;
    }

    return temp1;
  }
};