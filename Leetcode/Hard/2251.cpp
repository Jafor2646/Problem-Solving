class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
       vector<int> tempPeople(people.begin(), people.end());
       sort(tempPeople.begin(), tempPeople.end());
       sort(flowers.begin(), flowers.end());
       map<int, int> m;
       priority_queue<int, vector<int>, greater<int>> heap;
       int idx = 0;
       for(int i = 0; i< tempPeople.size();i++){
        while(idx< flowers.size() && flowers[idx][0] <= tempPeople[i]){
            heap.push(flowers[idx][1]);
            idx++;
        }
        while(!heap.empty() && heap.top()<tempPeople[i]){
            heap.pop();
        }
        m[tempPeople[i]] = heap.size();
       }
       vector<int> res;
       for(int i = 0; i<people.size();i++){
           res.push_back(m[people[i]]);
       }
       return res;
    }
};