class Solution {
public:
    vector<int> findSubstring(string s, vector<string> words) {
        vector<int> indices;
        if (s.empty() || words.empty()) {
            return indices;
        }
        
        map<string, int> wordCount;
        for (string word : words) {
            wordCount[word]++;
        }
        int wordLength = words[0].length();
        int wordArrayLength = wordLength * words.size();
        if(s.length() < wordArrayLength) return indices;
        for (int i = 0; i <= s.length() - wordArrayLength; i++) {
            string current = s.substr(i, wordArrayLength);
            map <string, int> wordMap;
            int index = 0;
            int j = 0;
            while (index < words.size()) {
                string part = current.substr(j, wordLength);
                wordMap[part]++;
                j += wordLength;
                index++;
            }
            if (wordCount == wordMap) {
                indices.push_back(i);
            }
        }
        return indices;
    }
};