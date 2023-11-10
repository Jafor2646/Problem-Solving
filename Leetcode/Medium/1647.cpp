class Solution {
public:
    int minDeletions(string s) {
        map<char, int> freqMap;
        set<int> freqSet;
        int del = 0;
        for(int i = 0; i<s.length(); i++){
            freqMap[s[i]]++;
        }
        for (auto i = freqMap.begin(); i != freqMap.end(); i++){
            while(freqSet.find(i->second) != freqSet.end()){
                --i->second;
                del++;
            }
            if(i->second>0){
                freqSet.insert(i->second);
            }
        }
        return del;
    }
};