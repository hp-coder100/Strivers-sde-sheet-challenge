#include<stack>
class Queue {
    // Define the data members(if any) here.
    stack<int> s1,s2;
    
    public:
    Queue() {
         
    }

    void enQueue(int val) {
        s1.push(val);
        // Implement the enqueue() function.
    }

    int deQueue() {
        int top = -1;
        if(isEmpty())
            return top;
       
        if(!s2.empty()){    
            top = s2.top();
            s2.pop();
            return top;
        }
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        top = s2.top();
        s2.pop();
        return top;
    }

    int peek() {
        
        int top = -1;
        
        if(isEmpty())
            return -1;
        
        if(!s2.empty()){    
            top = s2.top();
            return top;
        }
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        top = s2.top();
        return top;
    }

    bool isEmpty() {
        return s1.empty() && s2.empty();
        // Implement the isEmpty() function here.
    }
};



