class Solution {
public:
    
    int scheduleCourse(vector<vector<int>>& courses) {
    //sort on basis of last day
        sort(courses.begin(),courses.end(),[](vector<int> a,vector<int> b){return a.back()<b.back();});
    //max heap
        priority_queue<int> pq;
        int time=0;
        for(auto& c:courses){
            if(c[0]<=c[1]){
                if(c[0]+time<=c[1]){
                    pq.push(c[0]);
                    time+=c[0];
                    
                }
                else{
                    if(pq.top()>c[0]){
                        time-=pq.top();
                        pq.pop();
                        time+=c[0];
                        pq.push(c[0]);
                    }
                }
            }
        }
        
        
        
        return pq.size();
        
    }
};