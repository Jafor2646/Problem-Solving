#include <iostream>
#include <map>
using namespace std;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map <char, int> ransom;
        map <char, int> mag;
        bool temp = true;
        for(int i = 0; i<ransomNote.length(); i++){
            if(!ransom[ransomNote[i]]) ransom[ransomNote[i]] = 1;
            else ransom[ransomNote[i]]++;
        }
        for(int i = 0; i<magazine.length(); i++){
            if(!mag[magazine[i]]) mag[magazine[i]] = 1;
            else mag[magazine[i]]++;
        }
        for(auto i : ransom){
            auto a = mag.find(i.first);
            if(a == mag.end() || a->second < i.second){
                temp = false;
                break;
            }
        }
        return temp;
    }
};