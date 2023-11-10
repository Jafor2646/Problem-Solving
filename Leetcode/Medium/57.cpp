class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> store;
        int n = intervals.size();
        if(n == 0){
            store.push_back(newInterval);
            return store;
        }
        int i = 0;
        bool start = false, end = false;
        int startIdx = -1, endIdx = -1;
        for(; i<n;i++){
            if(start == false && end == false){
                if((intervals[i][0]<=newInterval[0] && intervals[i][1] >= newInterval[0]) || (intervals[i][0]<=newInterval[1] && intervals[i][1] >= newInterval[1]) || (newInterval[0]<= intervals[i][0] && newInterval[1]>=intervals[i][1])){
                    start = true;
                    startIdx = i;
                }else{
                    store.push_back(intervals[i]);
                }
            }else if(end == false){
                if(intervals[i][0] > newInterval[1]){
                    endIdx = i-1;
                    int firstVal, secondVal;
                    if(intervals[startIdx][0]< newInterval[0]){
                        firstVal = intervals[startIdx][0];
                    }else{
                        firstVal = newInterval[0];
                    }
                    if(intervals[endIdx][1]>newInterval[1]){
                        secondVal = intervals[endIdx][1];
                    }else{
                        secondVal = newInterval[1];
                    }
                    store.push_back({firstVal, secondVal});
                    store.push_back(intervals[i]);
                    end = true;
                }
            }else{
                store.push_back(intervals[i]);
            }
        }
        if(startIdx == -1){
            for(int i = 0; i<n;i++){
                if(i == n-1){
                    if(intervals[i][0]>newInterval[0]){
                        store.insert(store.begin()+i,newInterval);
                    }else store.push_back(newInterval);
                }else if(store[i][0]>newInterval[1]){
                    store.insert(store.begin()+i,newInterval);
                    break;
                }
                else if(store[i][0] < newInterval[0] && store[i+1][0] > newInterval[1]){
                    store.insert(store.begin()+(i+1),newInterval);
                    break;
                }
            }
        }else if(endIdx == -1){
            int firstVal, secondVal;
            if(intervals[startIdx][0]< newInterval[0]){
                firstVal = intervals[startIdx][0];
            }else{
                firstVal = newInterval[0];
            }
            if(intervals[n-1][1]>newInterval[1]){
                secondVal = intervals[n-1][1];
            }else{
                secondVal = newInterval[1];
            }
            store.push_back({firstVal, secondVal});
        }
        return store;
    }
};