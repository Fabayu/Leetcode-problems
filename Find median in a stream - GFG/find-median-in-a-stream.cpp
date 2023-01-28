//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution
{
    priority_queue<int, vector<int>, greater<int>> pqmin;
    priority_queue<int> pqmax;
    int size=0;
    public:
    //Function to insert heap.
    void insertHeap(int &x)
    {
        if(size==0){
            pqmax.push(x);size++;
        }
        else{
            if(x < pqmax.top()){
                pqmax.push(x);size++;
            }
            else{
                pqmin.push(x);size++;
            }
        }
        balanceHeaps();
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
        if((int)(pqmin.size()-pqmax.size())>1){
            int t = pqmin.top();
            pqmin.pop();
            pqmax.push(t);
        }
        else if((int)(pqmax.size()-pqmin.size())>1){
            int t = pqmax.top();
            pqmax.pop();
            pqmin.push(t);
        }
    }
    
    //Function to return Median.
    double getMedian()
    {
        if(size%2==0){
            double ans = (pqmin.top()+pqmax.top())/2;
            return ans;
        }
        if(pqmin.size()>pqmax.size()){
            return pqmin.top(); 
        }
        else{
            return pqmax.top();
        }
    }
};


//{ Driver Code Starts.

int main()
{
    int n, x;
    int t;
    cin>>t;
    while(t--)
    {
    	Solution ob;
    	cin >> n;
    	for(int i = 1;i<= n; ++i)
    	{
    		cin >> x;
    		ob.insertHeap(x);
    	    cout << floor(ob.getMedian()) << endl;
    	}
    }
	return 0;
}
// } Driver Code Ends