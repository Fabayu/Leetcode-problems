class Solution {
public:
    
//     bool isValid(int ni,int nj,int n){
//         if(ni>=0 && nj>=0 &&ni<n&&nj<n){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
//     double knightProbability(int N, int K, int r, int c) {
     
//         if(K==0) return 1.0;
        
//         // parent chess board
//         vector<vector<double>> parentBoard(N,vector<double>(N,0.0));
        
//         // child chess board
//         vector<vector<double>> childBoard(N,vector<double>(N,0.0));
        
//         // row and col offset for generating next move or child positions
//         // int rowoffset[] = {-2,-2,-1,-1,2,2,1,1};
//         // int coloffset[] = {1,-1,2,-2,1,-1,2,-2};
        
        
        
//         // initial position probability 1
//         parentBoard[r][c] = 1.0;
        
//         // Run K steps
//         // Each step update the child position probability from parent position 
//         // After each step assign child as parent board and create new child board
//         for(int m=1;m<=K;m++)
//         {
//             for(int i=0;i<N;i++)
//             {
//                 for(int j=0;j<N;j++)
//                 { 
//                                         if(parentBoard[i][j]!=0){
//                    int ni=i-2;
//                    int nj=j+1;
//         if(isValid(ni,nj,N)){
//                         childBoard[ni][nj]+=parentBoard[i][j]/8.0;
//                     }
                    
//                       ni=i-1;
//                    nj=j+2;
//                     if(isValid(ni,nj,N)){
//                         childBoard[ni][nj]+=parentBoard[i][j]/8.0;
//                     }
                    
//                      ni=i+1;
//                    nj=j+2;
                    
//                      if(isValid(ni,nj,N)){
//                         childBoard[ni][nj]+=parentBoard[i][j]/8.0;
//                     }
                    
                    
//                      ni=i+2;
//                    nj=j-1;
                    
//                      if(isValid(ni,nj,N)){
//                         childBoard[ni][nj]+=parentBoard[i][j]/8.0;
//                     }
//                       ni=i-2;
//                     nj=j-1;
                    
//                      if(isValid(ni,nj,N)){
//                         childBoard[ni][nj]+=parentBoard[i][j]/8.0;
//                     }
//                      ni=i+1;
//                     nj=j-2;
//                      if(isValid(ni,nj,N)){
//                         childBoard[ni][nj]+=parentBoard[i][j]/8.0;
//                     }
                    
                    
//                       ni=i-1;
//                     nj=j-2;
//                      if(isValid(ni,nj,N)){
//                         childBoard[ni][nj]+=parentBoard[i][j]/8.0;
//                     }
                    
//                       ni=i-2;
//                     nj=j-1;
//                      if(isValid(ni,nj,N)){
//                         childBoard[ni][nj]+=parentBoard[i][j]/8.0;
//                     }
                                      
//                 }}
//             }
            
//             parentBoard = childBoard;
//             fill(childBoard.begin(),childBoard.end(),vector<double>(N,0.0));
//         }
        

        
//         double knightProb = 0.0;
        
//         // Loop through parent board after K steps and sum up all probability
//         for(int i=0;i<N;i++){
//             for(int j=0;j<N;j++){
//                    knightProb+=parentBoard[i][j];
//             }}
//         return knightProb;
     
    
        
    
   
    
    
  double ego_(int N, int K, int r, int c, vector<vector<vector<double>>> & dp){   
     if(r < 0 || c < 0 || r >= N || c >= N) return 0;
        if(K == 0) return 1;
        if(dp[r][c][K] != -1) return dp[r][c][K];
        double sum = ego_(N, K - 1, r - 2, c - 1, dp) +
                     ego_(N, K - 1, r - 1, c - 2, dp) +
                     ego_(N, K - 1, r + 1, c - 2, dp) +
                     ego_(N, K - 1, r + 2, c - 1, dp) +
                     ego_(N, K - 1, r - 2, c + 1, dp) +
                     ego_(N, K - 1, r - 1, c + 2, dp) +
                     ego_(N, K - 1, r + 1, c + 2, dp) +
                     ego_(N, K - 1, r + 2, c + 1, dp);
        sum = sum / 8;
        dp[r][c][K] = sum;
        return dp[r][c][K];
    
    }
    double knightProbability(int N, int K, int r, int c) {
        vector<vector<vector<double>>> dp(N + 1, vector<vector<double>> (N + 1, vector<double>(K + 1, -1)));
        return ego_(N, K, r, c, dp);
    }
    
    
    
    
    
        

        
    
};

