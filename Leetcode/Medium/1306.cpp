class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        int n=arr.size();
        vector<bool>vis(n,false);
        queue<int>q;
        q.push(start); 
        vis[start]=true;
        while(!q.empty()){
           int size=q.size();
                while(size--){
                    int ind=q.front();
                    q.pop();
                    if(arr[ind]==0) return true;

                    int rightSide=ind+arr[ind];
                    int leftSide=ind-arr[ind];

                    if(rightSide>=0 && rightSide<n && !vis[rightSide]){
                        q.push(rightSide);
                        vis[rightSide]=true;
                    }
                    if(leftSide>=0 && leftSide<n && !vis[leftSide]){
                        q.push(leftSide);
                        vis[leftSide]=true;
                    }
                }
        }
      return false;
        
    }
};