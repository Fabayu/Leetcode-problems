//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int arr[], int n)
    {
       // Your code here
       
       
       //
       stack<int > st;
       vector<int> res(n);
       st.push(0);
       res[0]=1;
       for(int i=1;i<n;i++){
          
        while(st.size()>0&&arr[st.top()]<=arr[i]){
            st.pop();
        }
        if(st.size()==0){
            res[i]=i+1;
        }
        else{
            res[i]=i-st.top();
        }
        st.push(i);
           
       }
       return res;
       
       
       
       
       
    }
};



//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

// } Driver Code Ends