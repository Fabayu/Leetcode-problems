class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int buying_date=0;
        int selling_date=0;
        int profit=0;
        for(int i=1;i<prices.size();i++){
            
            if(prices[i]>=prices[i-1]){
                selling_date++;
            }
            else{
                
            
            profit+=prices[selling_date]-prices[buying_date];
            buying_date=selling_date=i;
        }
        }
         profit+=prices[selling_date]-prices[buying_date];
        return profit;
    }
};