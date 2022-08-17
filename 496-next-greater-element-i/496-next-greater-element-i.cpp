class Solution {
public:
    
    ///Approach find nge for nums2 storee= it in hash then for nums 2 check corresponding key for corresponding val
    //for hash --key-ele and val==ngeele
    
    vector<int> nextLargerElement(vector<int> arr, int n){
        // Your code here
        stack<int> s;
        s.push(arr[n-1]);
        vector<int> a(n);
        a[n-1]=-1;
        for(int i=n-2;i>=0;i--){
            while(s.size()>0&&arr[i]>s.top()){
                s.pop();
            }
            if(s.size()==0)a[i]=-1;
            else{
                a[i]=s.top();
            }
            s.push(arr[i]);
        }
        return a;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
     vector<int> nge=nextLargerElement(nums2,nums2.size());
    int i=0;
        map<int,int> m;
       for(int e:nums2){
           m[e]=nge[i];
           i++;
       } 
       vector<int> ans(nums1.size()); 
        for(int i=0;i<nums1.size();i++){
            ans[i]=m[nums1[i]];
        }
    return ans;
    }
};