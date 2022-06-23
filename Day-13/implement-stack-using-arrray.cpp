// Stack class.
class Stack {
    int n;
    int *arr;
    int p;
public:
    
    Stack(int capacity) {
        // Write your code here.
        n = capacity;
        arr = new int[n];
        p = 0;
       
    }

    void push(int num) {
        // Write your code here.
        if(p<n)
            arr[p++] = num;
    }

    int pop() {
        int t =-1;
        if(p>0){
            t = arr[p-1];
            
            p--;
        }
        return t;
    }
    
    int top() {// Write your code here.
        if(p>0)
            return arr[p-1];
        return -1;
    }
    
    int isEmpty() {
        // Write your code here.
        if(p==0)
            return 1;
        return 0;
    }
    
    int isFull() {
        // Write your code here.
        if(p==n)
            return 1;
        return 0;
    }
    
};