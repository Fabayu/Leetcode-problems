class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n=profits.size();
        
        // First we will store all the projects in projects vector as pairs {Profit(i), Capital(i)};


    vector<pair<int,int>> projects(n);
    for(int i=0;i<n;i++) projects[i]={profits[i],capital[i]}; 
    int i=0;
        
//         Now we will sort all the projects according to its capital value.
// Now we will fetch all the projects that we can perform for our own capital value.
    sort(projects.begin(),projects.end(),[&](pair<int,int> a,pair<int,int> b){ return a.second<b.second;});
    priority_queue<int> maxProfit;
    while(k--){
        while(i<n && w>=projects[i].second) maxProfit.push(projects[i++].first);
        
// After fetching all these projects sotre their profit value in Max Heap (maxProfit in below code).
// Now check if the Heap is Empty or not, if its not empty then take the top value of the heap (indicates that we chose max profit value from given projects, think greedy here)
        if(!maxProfit.empty()) w+=maxProfit.top(),maxProfit.pop();
    }
        // Now perform step 3, k times because we want to perform exactly k projects to gain max profit.
    return w; 
    }
};