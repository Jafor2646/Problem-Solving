class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry=0;
        int i=num1.length()-1;
        int j=num2.length()-1;
        string ans;
        char a,b;
        int x,y;
        while(1){
            if(i<0&&j<0&&carry==0){
                break;
            }
            if(i<0){
                x=0;
            }else{
                a=num1[i];
                x=a-'0';
            }
            if(j<0){
                y=0;
            }else{
                b=num2[j];
                y=b-'0';
            }
            int result=x+y+carry;
            carry=result/10;
            result=result%10;
            ans.push_back(result+'0');
            i--;
            j--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
    string multiply(string num1, string num2) {
        if(num1 == "0" || num2 == "0") return "0";
        int n = num1.size();
        int m = num2.size();
        int p = n-1;
        string total = "";
        for(int i = n-1; i>=0;i--){
            int c = 0;
            string temp1 = "";
            int a = num1[i]-'0';
            for(int j = m-1; j>=0;j--){
                int b = num2[j] - '0';
                int res = (a*b)+c;
                c = res/10;
                res = res%10;
                temp1+= (res + '0');
                if(j == 0 && c != 0) temp1+=(c + '0');
            }
            reverse(temp1.begin(), temp1.end());
            if(total.length() == 0) total = temp1;
            else{
                for(int k = 0; k<(p-i);k++){
                    temp1+='0';
                }
                total = addStrings(total, temp1);
            }
        }
        return total;

    }
};