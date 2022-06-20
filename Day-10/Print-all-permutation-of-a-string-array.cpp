void printAllPerm(string &s, int idx, vector<string> &res){
    if(idx==s.size())
    {
        res.push_back(s);
        return;
    }
    
    for(int i=idx; i<s.size();i++){
        swap(s[idx], s[i]);
        printAllPerm(s, idx+1, res);
        swap(s[idx], s[i]);
    }
    
}
vector<string> findPermutations(string &s) {
    // Write your code here.
    vector<string> res ;
    printAllPerm(s, 0, res);
    return res;
}