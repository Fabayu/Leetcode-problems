class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
       
        // first node of edge-0 --->> in edge-1 as well it's the center 
	if(edges[0][0] == edges[1][0] || edges[0][0] == edges[1][1])
		return edges[0][0];
	//  the second node of edge-0 will be center node 
   return edges[0][1];
    }
};