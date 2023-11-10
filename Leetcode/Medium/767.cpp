class Solution {
public:
    string reorganizeString(string s) {
        vector<int> characters(26, 0);
        for(int i = 0; i<s.length(); i++){
            characters[s[i]-'a']++;
        }
        int max = 0, maxLetter = 0;
        for(int i = 0; i<characters.size(); i++){
            if(characters[i]>max){
                max = characters[i];
                maxLetter = i;
            }
        }
        if(max > (s.length()+1)/2) return "";
        string result = s;
        int idx = 0;
        while(characters[maxLetter] != 0){
            result[idx] = char(maxLetter+'a');
            idx += 2;
            characters[maxLetter]--;
        }
        for(int i = 0; i< characters.size(); i++){
            while(characters[i] > 0){
                if(idx > s.length()-1) idx = 1;
                result[idx] = char(i+'a');
                idx+= 2;
                characters[i]--;
            }
        }
        return result;
    }
};