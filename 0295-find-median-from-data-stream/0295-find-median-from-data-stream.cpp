class MedianFinder {

     
        priority_queue<int,vector<int>,greater<int> > mini;
        priority_queue<int> maxi;
    
   public: 
    void addNum(int num) {
        if(mini.size()>0&&num>mini.top()){
            mini.push(num);
        }
        else{
            maxi.push(num);
        }
        if(mini.size()-maxi.size()==2){
           maxi.push(mini.top());
            mini.pop();
        }
        if(maxi.size()-mini.size()==2){
            mini.push(maxi.top());
            maxi.pop();
        }
    }
    
    double findMedian() {
        
        if(maxi.size()>mini.size()){
            return maxi.top();
        }
        
        else if(maxi.size()<mini.size()){
            return mini.top();
        }
        else{
            return (mini.top()+maxi.top())/2.0;
        }
        
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
//   void addNum(int num) {
//         small.push(num);
//         large.push(-small.top());
//         small.pop();
//         if (small.size() < large.size()) {
//             small.push(-large.top());
//             large.pop();
//         }
//     }

//     double findMedian() {
//         return small.size() > large.size()
//                ? small.top()
//                : (small.top() - large.top()) / 2.0;
//     }