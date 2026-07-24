class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestbuy=prices[0], maxprofit=0;

        for (int i=1; i<prices.size(); i++){
        if(bestbuy<prices[i]){

            maxprofit+=  prices[i]-bestbuy;
        }

        bestbuy= prices[i];

    }
    return maxprofit;
   }
};