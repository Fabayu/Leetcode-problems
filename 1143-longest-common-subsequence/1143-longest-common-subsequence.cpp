







class Solution {
public:
    
    
    int lcs(string t1,string t2,int m,int n){
      
    int dp[m+1][n+1];
        
       for(int i=0;i<m+1;i++){
           for(int j=0;j<n+1;j++){
               if(i==0||j==0){
                   dp[i][j]=0;
               }
           }
       }
               for(int i=1;i<m+1;i++){
           for(int j=1;j<n+1;j++){
      
        if(t1[i-1]==t2[j-1]){
dp[i][j]=1+dp[i-1][j-1];
            
            
            
            
            
            
            
            
            
        }
               
               
               
        else{
          dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
           }}}
        return dp[m][n];
    }  
        
    
    
    
    
    
   
        

    
    
    
        
        
    int longestCommonSubsequence(string text1, string text2) {
        
     int m=text1.size();
        int n=text2.size();
        
        return lcs(text1,text2,m,n);
        
        
        
    }
};






























//TLE




// class Solution {
// public:
    
    
//     int lcs(string text1,string text2,int m,int n){
    
//         if(m==0||n==0){
//             return 0;
//         }
//         if(text1[m-1]==text2[n-1]){
//             return 1+lcs(text1,text2,m-1,n-1);
            
//         }
//         else{
//             return max(lcs(text1,text2,m-1,n),lcs(text1,text2,m,n-1));
//         }
        
        
//     }  
//     int longestCommonSubsequence(string text1, string text2) {
//      int m=text1.size();
//         int n=text2.size();
//         return lcs(text1,text2,m,n);
        
        
        
//     }
// };



//Memoized


// class Solution {
// public:
    
    
//     int lcs(string text1,string text2,int m,int n){
//     int dp[m+1][n+1];//chaqnge 1
//         memset(dp,-1,sizeof(dp));//change 2
//         if(m==0||n==0){
//             return 0;
//         }
//         if(dp[m][n]!=-1){//change 3
//             return dp[m][n];
//         }
//         if(text1[m-1]==text2[n-1]){
//             return dp[m][n]=1+lcs(text1,text2,m-1,n-1);//change 4
            
//         }
//         else{
//             return dp[m][n]=max(lcs(text1,text2,m-1,n),lcs(text1,text2,m,n-1));//change 5
//         }
        
        
//     }  
//     int longestCommonSubsequence(string text1, string text2) {
        
//      int m=text1.size();
//         int n=text2.size();
        
//         return lcs(text1,text2,m,n);
        
        
        
//     }
// };









