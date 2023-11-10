class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> store;
        for(int i = 0; i<n;i++){
            store.push_back(i+1);
        }

        int idx = 0;
        while(store.size() != 1){
            idx = (idx+k-1)%store.size();
            cout << "idx: " << idx << endl;
            cout << "elem: " << store[idx] << endl;
            store.erase(store.begin()+idx);
        }
        return store[0];
    }
};