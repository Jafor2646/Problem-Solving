class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        int step = 2*numRows - 2;
        string store;
        for(int i = 0; i<numRows; i++){
            for(int j = i; j < s.length(); j += step){
                store += s[j];
                if(i>0 && i < numRows-1 && (j+step-2*i)<s.length()){
                    store += s[j+step-2*i];
                }
            }
        }
        return store;
    }
};