#include<algorithm>
bool static comparison(vector<int> a, vector<int> b) {
         return (a[1] > b[1]);
}
int jobScheduling(vector<vector<int>> &arr)
{
      sort(arr.begin(), arr.end(), comparison);
      int maxi = arr[0][0];
      for (int i = 1; i < arr.size(); i++) {
         maxi = max(maxi, arr[i][0]);
      }

      int slot[maxi + 1];

      for (int i = 0; i <= maxi; i++)
         slot[i] = -1;

      int countJobs = 0, jobProfit = 0;

      for (int i = 0; i < arr.size(); i++) {
         for (int j = arr[i][0]; j > 0; j--) {
            if (slot[j] == -1) {
               slot[j] = i;
               countJobs++;
               jobProfit += arr[i][1];
               break;
            }
         }
      }
    return jobProfit;

}
