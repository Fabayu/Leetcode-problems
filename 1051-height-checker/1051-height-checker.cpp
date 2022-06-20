class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> v;
        int cnt=0;
     for(int i=0;i<heights.size();i++){
         v.push_back(heights[i]);
     }   
        sort(heights.begin(),heights.end());
        
       for(int i=0;i<heights.size();i++){
           if(heights[i]!=v[i]){
               cnt++;
           }
       } 
        return cnt;
    }
};