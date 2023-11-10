class Solution {
public:
    bool isPalindrome(string s) {
        int l = s.length();
        int l2 = l/2;
        int j = l - 1;
        for(int i=0; i<l2; i++) {
            if(s[i] != s[j]) {
                return false;
            }
            j--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        if(s.length() == 1) return s;
        else if(s.length() == 2){
            if(s[0] == s[1]) return s;
            else{
                string a = "";
                a += s[0];
                return a;
            }
        }
        bool check = true;
        for(int i = 0; i<s.length()-1;i++){
            if(s[i] != s[i+1]){
                check = false;
                break;
            }
        }
        if(check) return s;
        string a = "";
        string max = "";
        max += s[0];
        int i = 0, j = s.length()-1;
        while(i < s.length()-1){
            a = "";
            if(s[i] == s[j]){
                a = s.substr(i,j-i+1);
                if(isPalindrome(a)){
                    if(a.length() > max.length()) max = a;
                    i++;
                    j = s.length()-1;
                }else{
                    j -= 1;
                    if(j==i){
                        i++;
                        j = s.length()-1;
                    }
                }
            }else{
                j -= 1;
                if(j==i){
                    i++;
                    j = s.length() - 1;
                }
            }
        }

        return max;
    }
};