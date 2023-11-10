class Solution {
public:
    string predictPartyVictory(string senate) {
        vector<char> sen;
        for(char i : senate){
            sen.push_back(i);
        }
        int len = sen.size();
        while (true){
            int R_count = 0;
            int D_count = 0;
            for(auto i: sen){
                if (i == 'R'){
                    R_count++;
                }
                else if(i =='D'){
                    D_count++;
                }
            }
            if(R_count == 0 || D_count ==0){
                break;
            }
            for (int i = 0; i < len; i++) {
                if (sen[i] == 'R') {
                    int j = (i + 1) % len;
                    while (j != i) {
                        if (sen[j] == 'D') {
                            sen[j] = 'X';
                            break;
                        }
                        j = (j + 1) % len;
                    }
                } else if (sen[i] == 'D') {
                    for (int j = (i + 1) % len; j != i; j = (j + 1) % len) {
                        if (sen[j] == 'R') {
                            sen[j] = 'X';
                            break;
                        }
                    }
                }
            }
        }
        
        char c;
        for(auto i: sen){
            if(i == 'R' || i=='D'){
                c = i;
                break;
            }
        }
        if (c=='R'){
            return "Radiant";
        } else{
            return "Dire";
        }
    }
};