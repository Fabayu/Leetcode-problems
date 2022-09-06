class Solution {
public:
    int findLength(vector<int>& t1, vector<int>& t2) {
        int n=t1.size();
        int m=t2.size();
            int dp[n+1][m+1];
       int max=0;
        
       for(int i=0;i<n+1;i++){
           for(int j=0;j<m+1;j++){
               if(i==0||j==0){
                   dp[i][j]=0;
               }
           
      
      
        else if (t1[i-1]==t2[j-1]){
dp[i][j]=1+dp[i-1][j-1];
            
            
            
            
            
            
            
            
            
        }
               
               
               
        else{
          dp[i][j]=0;
           }
           
           if(dp[i][j]>max){
               max=dp[i][j];
           }
           
           
           
           
           
           }} 
           
           
           
        return max;
       
    }
};