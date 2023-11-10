#include <iostream>
using namespace std;
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string word = "";
        if(word1.length()<= word2.length()){
            for(int i = 0; i<word1.length();i++){
                word+= word1[i];
                word+=word2[i];
            }
            for(int i = word1.length(); i<word2.length();i++){
                word+=word2[i];
            }
        }else{
            for(int i = 0; i<word2.length();i++){
                word+= word1[i];
                word+=word2[i];
            }
            for(int i = word2.length(); i<word1.length();i++){
                word+=word1[i];
            }
        }
        return word;
    }
};