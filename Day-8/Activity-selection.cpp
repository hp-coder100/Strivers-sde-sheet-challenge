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
#include<algorithm>
int maximumActivities(vector<int> &start, vector<int> &finish) {
    // Write your code here.
    int n = start.size();
    vector<pair<int, int>> activity(n);

    for (int i = 0; i < n; i++) {
        activity[i].first = finish[i];
        activity[i].second = start[i];
    }

    // Sort the meetings according to their Finishing Time.
    sort(activity.begin(), activity.end());

    int maxActivity = 1;
    int currentTime = activity[0].first;

    for (int i = 1; i < n; i++) {

        // Find the next meeting available.
        if (activity[i].second >= currentTime) {
            maxActivity++;
            currentTime = activity[i].first;
        }
    }
    return maxActivity;
}