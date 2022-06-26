#include<stack>// Implement class for minStack.
class minStack
{
	// Write your code here.
	stack<pair<int,int>> st;
	public:
		
		// Constructor
		minStack() 
		{ 
            // Write your code here.
		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{    
             if(!st.empty())
                 st.push(make_pair(num,min(getMin(), num)));
             else
                 st.push(make_pair(num, num));
        }
		
		// Function to remove the top element of the stack.
		int pop()
		{
		    if(st.empty())return -1;	
            int temp = st.top().first;
            st.pop();
            return temp;
        }
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
		   if(st.empty())return -1;
           int temp = st.top().first;
           return temp;
        }
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
           if(st.empty()) return -1;
		   return st.top().second;
        }
};