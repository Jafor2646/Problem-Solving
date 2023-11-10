typedef long long int ll;
const ll MOD = 1e9 + 7;
class Solution {
public:
    int sumDistance(vector<int>& nums, string s, int d) {
        for(ll i = 0; i < s.length(); i ++)
            if(s[i] == 'L')nums[i] -= d;
            else nums[i] += d;
        sort(nums.begin(), nums.end());
        
        vector<ll> pre(nums.begin(), nums.end());
        for(ll i = 1; i < nums.size(); i++){
            pre[i] += pre[i - 1];
            pre[i] %= MOD;
        }

        ll ans = 0;
        for(ll i = 1; i < nums.size(); i++){
            ans += i * nums[i] - pre[i - 1];
            ans %= MOD;
        }
        return ans;
    }
};