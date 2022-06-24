#include<algorithm>
int getMedian(vector<vector<int>> &matrix)
{
    vector<int> a;
    // Write your code here.
    for(auto x:matrix){
        a.insert(a.end(), x.begin(), x.end());
        
    }
    sort(a.begin(), a.end());
    return a.size()%2 ? a[a.size()/2]:a[a.size()/2 + 1];
}