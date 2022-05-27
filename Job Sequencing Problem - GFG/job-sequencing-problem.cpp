// { Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


 // } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    public:
    
    static bool comparison (Job a,Job b){
        return (a.profit>b.profit);
    }
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        vector<int> result;
     sort(arr,arr+n,comparison);
     int maxi=arr[0].dead;
     for(int i=1;i<n;i++){
         maxi=max(maxi,arr[i].dead);
     }
     int slot[maxi+1];
     for(int i=0;i<=maxi;i++){
         slot[i]=-1;
     }
    int  jobprofit=0,jobcount=0;
    for(int i=0;i<n;i++)
{    
    for(int j=arr[i].dead;j>0;j--){
        if(slot[j]==-1){
            slot[j]=i;
            
            jobprofit+=arr[i].profit;
            jobcount++;
            break;
        }
    }
}


    
    
   result.push_back(jobcount);
   result.push_back(jobprofit);
   return result;
    
    
    
    } 
};




// INTUITION 


// JOB   DEADLINE    PROFIT   Updated 
// 1      2           100      100
// 2      1            19      27
// 3      2            27      25
// 4      1            25      19
// 5      1            15      15

// ->>choose max profit first so we choose Job 1
// ->>so sort the profit column with max progit at top
// ->>since max we can accomadate is max value of deadlibe that is 2
// ->>find max deadline 
// ->> create array of size maxi+1  [say deadlne max is 6 create array of size 7]
// ->>fill the array with -1;
// ->>intitalise profit and jobs =0
// ->>Run two loops and check from deadline to 0 if there is -1 fill it with profit in it
// ->>then jobs++ profitadd
// -->break from the loop
// -->return the pair











// { Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}


  // } Driver Code Ends