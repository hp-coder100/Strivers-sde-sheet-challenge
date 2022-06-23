
#include<queue>
class Stack {
	// Define the data members.
    int size;
    queue<int> q1,q2;
   public:
    Stack() {
        size =0;
        // Implement the Constructor.
    }

    /*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        return size;
        // Implement the getSize() function.
    }

    bool isEmpty() {
        return q1.empty();
        // Implement the isEmpty() function.
    }

    void push(int element) {
        
        size++;
        q1.push(element);
        // Implement the push() function.
    }

    int pop() {
        if(q1.empty())
            return -1;
        
        size--;
        while(q1.size()!=1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int temp = q1.front();
        q1.pop();
        
        queue<int> q = q1;
        q1= q2;
        q2=q;
        
        return temp;// Implement the pop() function.
    }

    int top() {
        if(q1.empty())
            return -1;
        
        while(q1.size()!=1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int temp = q1.front();
        q1.pop();
        q2.push(temp);
        
        queue<int> q = q1;
        q1= q2;
        q2=q;
        return temp;
        
        
    }
};



///using single queue

class Stack {
  queue < int > q;
  public:
    void Push(int x) {
      int s = q.size();
      q.push(x);
      for (int i = 0; i < s; i++) {

        q.push(q.front());
        q.pop();
      }
    }
  int Pop() {
    int n = q.front();
    q.pop();
    return n;
  }
  int Top() {
    return q.front();
  }
  int Size() {
    return q.size();
  }
};