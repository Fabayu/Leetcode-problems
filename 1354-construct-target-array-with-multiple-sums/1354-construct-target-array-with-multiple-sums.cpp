class Solution {
public:
    bool isPossible(vector<int>& target) {
       long top_ele=0;
        priority_queue<int> pq;
        long sum=0;
        for (int ele:target){      // push element in arrray to priority queue(max heap)
           pq.push(long(ele));
            sum+=ele;
        }
        while(pq.top()!=1){
            top_ele=pq.top();
            
            sum=sum-top_ele;
            pq.pop();
        
        if(sum<=0 ||sum >=top_ele){
            return false;
        }
        
            top_ele=top_ele%sum;
            sum=sum+top_ele;
            pq.push(top_ele>0?top_ele:sum);
        
        }
         return true;
        
    }
};