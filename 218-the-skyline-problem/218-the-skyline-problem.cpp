
class Solution {
bool static myCmp(vector<int>&p1,vector<int>&p2){
    if(p1[0]==p2[0]){
        return p1[1]<p2[1];
    }
    return p1[0]<p2[0];
}
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        vector<vector<int>>points;
        
        int len = buildings.size();
        for(int i=0;i<len;i++){
            points.push_back({buildings[i][0],-buildings[i][2]});
                  points.push_back({buildings[i][1],buildings[i][2]});
        }
        sort(points.begin(),points.end(),myCmp);
       multiset<int,greater<int>>maxHeight;
        maxHeight.insert(0);
        vector<vector<int>>ans;
     
        for(int i=0;i<points.size();i++){
           
            if(points[i][1]<0){
                if(*maxHeight.begin()<abs(points[i][1])){
                    ans.push_back({points[i][0],abs(points[i][1])});
                }
                   maxHeight.insert(abs(points[i][1]));
                
            }
            else{
                int currHeight = *maxHeight.begin();
                 maxHeight.erase(maxHeight.find(points[i][1]));
                if(currHeight==points[i][1]){
                    if(maxHeight.find(points[i][1])!=maxHeight.end()){
                        continue;
                    }
                    ans.push_back({points[i][0],*maxHeight.begin()});
                }
            }
        }
        return ans;
    }
};