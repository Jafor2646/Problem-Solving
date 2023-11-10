class Solution {
public:
    // size_t myPow(size_t x, size_t n) {
    //     if (n < 0){
    //         x = 1.0 / x;
    //     }
    //     size_t result = 1.0;
    //     size_t power = x;
    //     while (n != 0){
    //         if (n % 2 != 0){
    //             result *= power;
    //         }
    //         n /= 2;
    //         power = power * power;
    //     }
    //     return result;
    // }
    int countOrders(int n) {
        // size_t ans = 2*n;
        // size_t div = myPow(2, n);
        // n = 2*n -1;
        // while(n != 1){
        //     ans *= n;
        //     n-=1;
        // }
        // cout<< ans << endl;
        // ans /= div;
        // cout << ans << endl;
        // return ans % 1000000007;
        size_t mod = 1000000007;
        size_t x = 2*n;
        size_t ans = 1;
        for(int i = n; i>=1; i--){
            ans = ans*(x*(x-1)/2)%mod;
            x -= 2;
        }
        return ans;
    }
};