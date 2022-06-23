#include<stack>
#include<algorithm>
vector<int> nextGreater(vector<int> &arr, int n) {
    stack<int> s;
    vector<int> res(n);
    for (int i = n - 1; i >= 0; i--) {
        /* if stack is not empty, then
        pop an element from stack.
        If the popped element is smaller
        than next, then
        a) print the pair
        b) keep popping while elements are
        smaller and stack is not empty */
        if (!s.empty()) {
            while (!s.empty() && s.top() <= arr[i]) {
                s.pop();
            }
        }
        res[i] = s.empty() ? -1 : s.top();
        s.push(arr[i]);
    }
    
    return res;
}