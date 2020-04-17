/*

Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

push(x) -- Push element x onto stack.
pop() -- Removes the element on top of the stack.
top() -- Get the top element.
getMin() -- Retrieve the minimum element in the stack.
 

Example:

MinStack minStack = new MinStack();
minStack.push(-2);
minStack.push(0);
minStack.push(-3);
minStack.getMin();   --> Returns -3.
minStack.pop();
minStack.top();      --> Returns 0.
minStack.getMin();   --> Returns -2.

*/

class MinStack {
   int stack[10000];
    int topptr;
public:
    
    MinStack()
    {
        topptr=-1;
       
    }
    
    void push(int x) {
        topptr++;
        stack[topptr]=x;
        
    }
    
    void pop()
    {
        if(topptr != -1)

        {
            topptr--;
        }
    }
    
    int top() 
    {
        return stack[topptr];
        
    }
    
    int getMin()
    {
         int ans=stack[topptr];
        for(int i=0;i<=topptr;i++)
        {
            ans=min(ans,stack[i]);
        }
        return ans;
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

