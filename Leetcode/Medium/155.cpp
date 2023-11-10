class MinStack {
    vector<int> s, minIdx;
public:
    void push(int val) {
        if(minIdx.size() == 0 || val < s[minIdx[minIdx.size()-1]]) minIdx.push_back(s.size());
        s.push_back(val);
    }
    
    void pop() {
        s.pop_back();
        if(minIdx[minIdx.size()-1] == s.size()) minIdx.pop_back();
    }

    int top(){
        return s[s.size()-1]; 
    }
    int getMin(){ 
        return s[minIdx[minIdx.size()-1]]; 
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */