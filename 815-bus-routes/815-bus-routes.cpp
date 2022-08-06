        
  /*  which buses travels that station

    Like for - routes = [[1,2,7],[3,6,7]]

    stations[1] = [0]
    stations[2] = [0]
    stations[7] = [0,1]
    stations[3] = [1]
    stations[6] = [1]
    
    */






class Solution {
public:

    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
        
        if(source==target)    
            return 0;
        unordered_map<int,vector<int>> stations; 

    
        unordered_map<int,int> visitedBus,visitedStation;
        
        
        for(int i=0;i<routes.size();i++)       
            //  the stations unordered_map 
            for(int j=0;j<routes[i].size();j++)
                stations[routes[i][j]].push_back(i);
        
        
          
        int ans =0 ,size, curBus ;
        queue<int> q;
       
        for(int i=0;i<stations[source].size();i++)   // store all buses in queue that travels source station
        {
            q.push(stations[source][i]);
            visitedBus[stations[source][i]]++;   // mark bus as visited
        }
        visitedStation[source]++;  // mark station as visited
        
        
        while(!q.empty())
        {
            size = q.size();   
            ans++;
            while(size--) 
            {
                curBus = q.front();
                q.pop();
                for(int i=0;i<routes[curBus].size();i++)
                {
                    if(routes[curBus][i]==target) 
                        
                        
                        //  station is target station return the ans
                        return ans;
                    int &st = routes[curBus][i]; 
                    // visit that station and store all buses that will travels that (st) station
                    if(!visitedStation.count(st))
                    {
                        for(int j=0;j<stations[st].size();j++)
                        {
                            if(!visitedBus.count(stations[st][j]))
                            {
                                q.push(stations[st][j]);
                                visitedBus[stations[st][j]]++;  
                            }
                        }
                        visitedStation[st]++;  // mark as visited
                    }
                }
            }
        }
        return -1;  
    }
};