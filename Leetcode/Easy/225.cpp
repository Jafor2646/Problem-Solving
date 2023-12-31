#include <iostream>
#include <queue>
using namespace std;
class MyStack {
private:
     queue<int> q1;
     queue<int> q2;
     int t;
public:
    MyStack() {

        
    }
    
    void push(int x) {
        q1.push(x);
        t = x;
        
    }
    
    int pop() {
        while(q1.size() > 1){
            t = q1.front();
            q1.pop();
            q2.push(t);
        }
        int t1 = q1.front();
        q1.pop();
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
        return t1;
    }
    
    int top() {
        return q1.back();
        
    }
    
    bool empty() {
        return q1.empty();
        
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */