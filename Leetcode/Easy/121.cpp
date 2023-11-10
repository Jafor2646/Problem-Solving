#include <iostream>
#include <string>
#include<vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // if(prices.size() == 1) return 0;
        // int min = prices[0];
        // int min_index = 0;
        // for(int i= 1; i<prices.size();i++){
        //     if(min>prices[i]){
        //         min = prices[i];
        //         min_index = i;
        //     }
        // }
        // int max = min;
        // for(int i = min_index+1; i < prices.size(); i++){
        //     if(max<prices[i]){
        //         max = prices[i];
        //     }
        // }
        // int MAX = prices[prices.size()-1];
        // int max_index = prices.size()-1;
        // for(int i= prices.size()-2; i>=0;i--){
        //     if(MAX<prices[i]){
        //         MAX = prices[i];
        //         max_index = i;
        //     }
        // }
        // int MIN = MAX;
        // for(int i = 0; i<max_index;i++){
        //     if(MIN>prices[i]){
        //         MIN = prices[i];
        //     }
        // }
        // if(max_index<min_index-2){
        //     int smin = prices[max_index+1];
        //     int smin_index = max_index+1;
        //     for(int i= max_index+2; i<min_index;i++){
        //         if(smin>prices[i]){
        //             smin = prices[i];
        //             smin_index = i;
        //         }
        //     }
        //     int smax = smin;
        //     for(int i = smin_index+1; i < min_index; i++){
        //         if(smax<prices[i]){
        //             smax = prices[i];
        //         }
        //     }
        //     int sMAX = prices[min_index-1];
        //     int smax_index = min_index-1;
        //     for(int i= min_index-2; i>max_index;i--){
        //         if(sMAX<prices[i]){
        //             sMAX = prices[i];
        //             smax_index = i;
        //         }
        //     }
        //     int sMIN = sMAX;
        //     for(int i = max_index+1; i<smax_index;i++){
        //         if(sMIN>prices[i]){
        //             sMIN = prices[i];
        //         }
        //     }
        //     int x = sMAX-sMIN;
        //     int y = smax-smin;
        //     int a = MAX-MIN;
        //     int b = max-min;
        //     // cout<< sMAX << sMIN << endl;
        //     // cout << x << y << a << b;
        //     if(x>0 || y>0 || a>0 || b>0){
        //         if(x>=y && x>=a && x>=b) return x;
        //         else if(y>=x && y>=a && y>=b) return y;
        //         else if(a>=x && a>=b && a>=y) return a;
        //         else return b;
        //     }
        //     return 0;
        // }
        // if(MIN<MAX || max>min){
        //     if((MAX-MIN)> (max-min)) return MAX-MIN;
        //     else return max - min;
        // }
        // return 0;
        int max = INT_MIN;
        int count = 0, i = 1;
        while(count < prices.size()-1){
            if(prices[count]<prices[i]){
                int dif = prices[i] - prices[count];
                if(max < dif) max = dif;
                if(i != prices.size()-1) i++;
                else{
                    count++;
                    i = count + 1;
                }
            }else{
                count = i;
                i = count + 1;
            }
        }
        return (max>0) ? max : 0;
    }
};