int findMinimumCoins(int amount) 
{
    // Write your code here
    vector<int> coins{1000, 500, 100, 50, 20, 10, 5, 2, 1};
    int ans = 0;
    for(int i=0;i<coins.size(); i++){
        if(amount/coins[i]){
            ans += amount/coins[i];
            amount = amount%coins[i];
        }
    }
    
    return ans;
}
