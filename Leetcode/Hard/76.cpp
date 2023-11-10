class Solution {
private:
    bool contain(map<char, int> &m1, map<char,int> &m2){
        for(auto it: m2){
            if(m1[it.first] < it.second) return false;
        }
        return true;
    }
public:
    string minWindow(string s, string t) {
        if(s.length()<t.length()) return "";
        int idx = 0, ansLen = INT_MAX, i = 0, j=0, n = s.length();
        map<char, int> ms;
        map<char, int> mt;
        for(auto ch: t){
            mt[ch]++;
        }
        while(j<n){
            ms[s[j]]++;
            while(contain(ms, mt)){
                if((j-i+1) <= ansLen){
                    ansLen = j-i+1;
                    idx = i;
                }
                ms[s[i]]--;
                if(ms[s[i]] == 0) ms.erase(s[i]);
                i++;
            }
            j++;
        }
        // cout << ansLen << endl;
        if(ansLen == 2147483647) return "";
        return s.substr(idx, ansLen);
    }
};