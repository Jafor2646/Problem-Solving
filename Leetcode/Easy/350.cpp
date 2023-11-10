#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector <int> nums;
        if(nums1.size() <= nums2.size()){
            for(int i = 0; i<nums1.size(); i++){
                for(int j = 0; j<nums2.size(); j++){
                    if(nums1[i] == nums2[j]){
                        nums.push_back(nums1[i]);
                        nums2.erase(nums2.begin()+j);
                        break;
                    }
                }
            }
        }else{
            for(int i = 0; i<nums2.size(); i++){
                for(int j = 0; j<nums1.size(); j++){
                    if(nums2[i] == nums1[j]){
                        nums.push_back(nums2[i]);
                        nums1.erase(nums1.begin()+j);
                        break;
                    }
                }
            }
        }
        return nums;
    }
};