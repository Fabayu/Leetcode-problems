// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:  
    
    /*
                                   i
    {1, 5, 10, 20, 40, 80, 80, 80,90}
                   j
    {6, 7, 20, 80, 80, 100}
                                k
    {3, 4, 15, 20, 30, 70, 80, 80,120}
    */
       
           
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
         vector<int> res;
         
         int i=0;
         int j=0;
         int k=0;
          int prev1,prev2,prev3;
         prev1=prev2=prev3=INT_MIN;
         while(i<n1&&j<n2&&k<n3){
             while(i<n1 && prev1==A[i]){
                 i++;
             }
             while(j<n2 && prev2==B[j]){
                 j++;
             }
             while(k<n3 && prev3==C[k]){
                 k++;
             }
             
             
             if((A[i]==B[j])&&(B[j]==C[k]))
             {
                 res.push_back(A[i]);
                 prev1=A[i];
                 prev2=B[j];
                 prev3=C[k];
                 i++;
                 j++;
                 k++;
             }
             else if(A[i]<B[j]){
                 
                 prev1=A[i];
                 i++;
             }
             else if(B[j]<C[k]){
                 
                 prev2=B[j];
                 j++;
             }
             else {

                 prev3=C[k];
                 
                                  k++;
             }
             
             
             
         }
        return res;
            
          //code here.
        
        
        
        
        
        
        

}

};

// { Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}  // } Driver Code Ends