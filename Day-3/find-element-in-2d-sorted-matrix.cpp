#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    // Write your code here.
    int start = 0, end = (m*n)-1;
    while(start<=end){
        int mid = start+(end-start)/2;
        int element = mat[mid/n][mid%n];
        if(element == target)
            return true;
        else if(target < element){
           end = mid-1;
        }
        else
            start = mid+1;
    }
    return false;
}