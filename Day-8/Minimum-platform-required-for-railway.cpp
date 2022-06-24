int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here.
    sort(at, at+n);
    sort(dt, dt+n);
    int i=1, j=0;
    int ans = 1;
    int count = 1;
    while(i< n && j < n){
        if(at[i] <= dt[j])
        {
            i++;
            count++;
        }
        else{
            j++;
            count--;
        }
        ans = max(ans, count);
    }
    return ans;
}