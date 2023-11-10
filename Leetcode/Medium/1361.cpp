class Solution {
public:
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {       int root = -1;
        set<int> children;
        children.insert(leftChild.begin(), leftChild.end());
        children.insert(rightChild.begin(), rightChild.end());
        for(int i = 0; i<n; i++){
            if(children.find(i) == children.end()) root = i;
        }
        if(root == -1) return false;
        children.clear();
        set<int> seen;
        queue<int> q;
        seen.insert(root);
        q.push(root);
        while(!q.empty()){
            int parent = q.front();
            q.pop();
            int child[] = {leftChild[parent], rightChild[parent]};
            for(int c: child){
                if(c != -1){
                    if(seen.find(c) != seen.end()) return false;
                    q.push(c);
                    seen.insert(c);
                }
            }
        }
        return seen.size() == n;
    }
};