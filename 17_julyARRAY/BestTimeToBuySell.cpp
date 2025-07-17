#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int ans ;
         int mini = prices[0];
         int maxi = 0;
        for(int i=1; i<prices.size(); i++){
            if(prices[i]<mini){
                mini = min(mini , prices[i]);
            }
            else {
                int profit = prices[i] - mini;
                maxi = max(maxi , profit);
            }

        }
      ans = maxi;
      if(ans<0)return 0;
      return ans;
        
    }
};

//  2nd way to code 

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mini = prices[0];
        int maxprofit = 0;

        for (int i = 1; i<n; i++){
           int cost = prices[i]-mini;
           maxprofit = max(maxprofit, cost);
           mini = min(mini , prices[i]);
        }
        return maxprofit;
    }
};