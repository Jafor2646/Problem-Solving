#include <iostream>
#include <stack>
using namespace std;
class MyQueue {
public:
    stack <int> store;
    
    void push(int x) {
        pushes(x);
    }
    void pushes(int x){
        if(store.size()==0){
            store.push(x);
            return;
        }
        int data;
        data = store.top();
        store.pop();
        pushes(x);
        store.push(data);
        return;
        
    }
    
    int pop() {
        int data = store.top();
        store.pop();
        return data;
    }
    
    int peek() {
        return store.top();
    }
    
    bool empty() {
        return (store.size()==0);
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */