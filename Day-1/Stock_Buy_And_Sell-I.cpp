#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
   int maxProfit = 0;
	int minPrice = INT_MAX;
	for(int i=0; i< prices.size(); i++){
		minPrice = min(minPrice, prices[i]);
		int profit = prices[i] - minPrice;
		maxProfit = max(maxProfit, profit);
	}
	return maxProfit;
}