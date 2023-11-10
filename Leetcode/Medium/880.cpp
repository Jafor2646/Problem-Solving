class Solution {
public:
    string decodeAtIndex(string s, int k) {
        size_t decodedLength = 0;
        int c;
        for(int i = 0; i< s.length(); i++){
            c = s[i] - 'a';
            if(c>=0 && c<=25){
                decodedLength++;
            }else{
                decodedLength *= s[i] - '0';
            }
        }
        cout << decodedLength << endl;
        for(int i = s.length()-1; i>=0;i--){
            c = s[i]-'a';
            if(c < 0 || c > 25){
                cout << "number" << endl;
                cout << decodedLength << endl;
                cout << k << endl;
                decodedLength /= (s[i] - '0');
                k = k % decodedLength;
            }else{
                cout << "character" << endl;
                cout << decodedLength << endl;
                cout << k << endl;  
                if(k == 0 || decodedLength == k){
                    cout << s[i] << endl;
                    return string(1,s[i]);
                }
                decodedLength--;
            }
        }
        return "";
    }
};