class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int start = 0, end = 0, jump = 0;
        
        while(end < n-1){
            int nextend = end;
            
            for(int i = start; i <= min(end, n-1); ++i){
                // cout << "i: " << i << ", " << i + nums[i] << endl;
                nextend = max(nextend, i + nums[i]);
            }
            
            start = end+1;
            end = nextend;
            ++jump;
        }
        
        return jump;
    }
};