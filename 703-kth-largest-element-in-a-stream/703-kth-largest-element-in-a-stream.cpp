class KthLargest {
public:
//     KthLargest(int k, vector<int>& nums) {
        
//     }
    
//     int add(int val) {
        
//     }
    
    priority_queue<int,vector<int>, greater<int>> min_heap;
    int kth = 0;
    KthLargest(int k, vector<int>& nums) {
        int n = nums.size();
        kth = k;
        for(int i=0;i<n;i++)
        {
            min_heap.push(nums[i]);
            if(min_heap.size() > k)
                min_heap.pop();
        }
    }
    
    int add(int val) {
        min_heap.push(val);
        if(min_heap.size() > kth)
            min_heap.pop();
        return min_heap.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */