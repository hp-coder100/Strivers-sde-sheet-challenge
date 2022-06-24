int longestSubSeg(vector<int> &A , int n, int K){
    // Write your code here.
   int i = 0, j;
        for (j = 0; j < n; ++j) {
            if (A[j] == 0) K--;
            if (K < 0 && A[i++] == 0) K++;
        }
        return j - i;
}
