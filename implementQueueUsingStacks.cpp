// 232
#include <stack>

using std::stack;

class MyQueue {
public:
    /** Initialize your data structure here. */
    MyQueue() {


    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        while(!stackOut.empty()) {
            stackIn.push(stackOut.top());
            
            

            stackOut.pop();
        }
        stackIn.push(x);
        while (!stackIn.empty()) {
            stackOut.push(stackIn.top());
            
            
            
            stackIn.pop();
        }
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int value = stackOut.top();
        stackOut.pop();
        return value;
    }
    
    /** Get the front element. */
    int peek() {
        return stackOut.top();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        
        return stackOut.empty();
    }

private:
    stack<int> stackIn;
    stack<int> stackOut;

};