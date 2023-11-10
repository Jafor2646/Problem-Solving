class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> ans = {0, 1};
        n--;

        int mul = 1;
        while(n>0){
            mul = mul*2;
            for(int i=ans.size()-1; i>=0; i--) ans.push_back(ans[i]+mul);
            n--;
        }

        return ans;
    }
};