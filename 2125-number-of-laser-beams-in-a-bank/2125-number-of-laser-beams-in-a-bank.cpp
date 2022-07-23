class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
    int pre=0;
        int cur=0;
        int ans=0;
        for(auto &a:bank){
            cur=count(a.begin(),a.end(),'1');
            if(cur!=0){
                ans+=pre*cur;
                pre=cur;
            }
        }
       return ans;
    }
};