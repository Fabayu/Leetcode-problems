class Solution{
    
public:

int coinChange(vector<int>& coins, int amount) {
    int n = coins.size();
    int ar[n+1][amount+1];
        for(int i = 0; i<n+1; i++){
           for(int j = 0; j<amount+1; j++){
                 if(i==0){
                    ar[i][j]=10001;
                   }
                 if(j==0){
                     ar[i][j]=0;
                 }
           }}
    for(int i = 1; i<n+1;i++){
        for(int j=1; j<amount+1;j++){
            if(coins[i-1]<= j){
                ar[i][j] = min(1+ar[i][j-coins[i-1]],ar[i-1][j]);
            }
            else{
                ar[i][j] = ar[i-1][j];
            }
        }
    }
    if(ar[n][amount] > 10000) return -1;
    return ar[n][amount];   
}
};