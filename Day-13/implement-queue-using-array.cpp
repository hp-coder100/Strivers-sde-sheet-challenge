class Queue {
    int *arr;
    int dfront;
    int rear;
    int size;
public:
    Queue() {
        // Implement the Constructor
    	size = 10001;
        arr = new int[size];
        dfront=rear=0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        return dfront==rear;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
          arr[rear++]= data;
    }

    int dequeue() {
        // Implement the dequeue() function
       if(dfront==rear)
           return -1;
        int ans = arr[dfront];
        arr[dfront++]=-1;
        if(rear==dfront){
			rear=dfront=0;
        }
        return ans;
    }

    int front() {
        // Implement the front() function
        if(dfront==rear)
            return -1;
        return arr[dfront];
    }
};