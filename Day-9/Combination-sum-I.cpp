vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    vector<vector<int>> ans;

    for (int i = 0; i < (1 << n); i++)
    {
        int sum = 0;
        vector<int> vec;
        for (int j = 0; j < n; j++)
        {
            // Checking wheather the element is present the subset or not.
            if ((1 << j) & i)
            {
                sum += arr[j];
                vec.push_back(arr[j]);
            }
        }

        // If sum is 'K'.
        if (sum == k)
        {
            ans.push_back(vec);
        }
    }

    // Return ans.
    return ans;
    // Write your code here.
}