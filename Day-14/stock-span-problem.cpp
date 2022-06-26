#include<stack>
vector<int> findSpans(vector<int> &price) {
    // Write your code here.
    stack<pair<int,int>> sk;
    vector<int> ans(price.size());
    for(int i=0; i <price.size(); i++){
        int ct = 1;
        while(sk.size() and sk.top().first <= price[i])    // as shown in during Dry run on sample input
                ct+=sk.top().second , sk.pop();            // we add count of poped element's count
                
        sk.push({price[i] , ct});
        ans[i] = ct;  
    }
    return ans;
}