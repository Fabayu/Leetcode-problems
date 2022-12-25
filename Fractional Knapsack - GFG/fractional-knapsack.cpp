//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


// } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

bool comp(Item a,Item b){
     double q1=(double)a.value/(double)a.weight;
     double q2=(double)(b.value)/(double)b.weight;
     return q1>q2;
 }
class Solution
{
    
    public:


 

    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
   
    sort(arr,arr+n,comp);
    int cw=0;
    double profit=0;
    for(int i=0;i<n;i++){
        
   if(cw+arr[i].weight<=W){
       cw+=arr[i].weight;
       profit+=arr[i].value;
       
   }
   else{
       int remain=W-cw;
       profit+=(arr[i].value/(double)arr[i].weight)*double(remain);
       break;
   }
   
   
    }
   return profit;
   
    }
        
};


//{ Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends