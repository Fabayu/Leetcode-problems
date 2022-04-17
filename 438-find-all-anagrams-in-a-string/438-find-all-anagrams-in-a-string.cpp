class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
     unordered_map<char,int> mp;//freq in map;
     vector<int> ans;
      for(auto it: p){
            mp[it]++;
        }    
       int cnt=0;
       cnt=mp.size();
        int k=p.size();
        int i=0;
        int j=0;
        while(j<s.size()){
        if(mp.find(s[j])!=mp.end()){  
        mp[s[j]]--; 
        if(mp[s[j]]==0){ 
                cnt--;
            }
        } 
        if(j-i+1<k){
          j++;  
        }   
          else  if(j-i+1==k){
                if(cnt==0){
                    ans.push_back(i);
                }
                if(mp.find(s[i])!=mp.end()){
                    mp[s[i]]++;
                
                
                
   
                if(mp[s[i]]==1){
                    cnt++;
                }
                }
                i++;
                j++;
            }
            
            
        }
        
        return ans;
        
        
    }
};


