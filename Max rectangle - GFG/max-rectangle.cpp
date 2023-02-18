//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


// } Driver Code Ends
/*You are required to complete this method*/

class Solution{
  public:
  
  
  
  
  int  histogram(vector<int> &arr, int n)
    {
//make left and right
int left[n];
int right[n];
//for left next smaller
stack<int> st;
stack<int> st2;
st.push(0);
left[0]=-1;
for(int i=1;i<n;i++){
    while(st.size()> 0 and arr[i]<=arr[st.top()]){
        st.pop();
    }
    left[i]=st.size()==0?-1:st.top();
    st.push(i);
    
}
    
    st2.push(n-1);
    right[n-1]=n;
    for(int i=n-2;i>=0;i--){
        while(st2.size()>0 and arr[i]<=arr[st2.top()]){
            st2.pop();
        }
        right[i]=st2.size()==0?n:st2.top();
        st2.push(i);
        
    }
    
    
    int maxi=0;
    int area;
    for(int i=0;i<n;i++){
        int width=right[i]-left[i]-1;
        area=width*arr[i];
        maxi=max(area,maxi);
    }
    
        return maxi;
        
        
        
    }
    
    
    
    int maxArea(int M[MAX][MAX], int n, int m) {
        
        
        vector<int> h(m, 0);
        int maxArea = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(M[i][j] == 1) {
                    h[j]++;
                }
                else h[j] = 0;
            }
            int area =histogram(h,m);
            maxArea = max(maxArea, area);
        }
        return maxArea;
       
        
    }
};


//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}

// } Driver Code Ends