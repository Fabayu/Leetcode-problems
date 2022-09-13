class Solution {
public:
    vector<int> searchRange(vector<int>& n, int t) {
        if(n.size()==0){
            return {-1,-1};
        }
        vector<int> v;
        
        for(int i=0;i<n.size();i++){
            if(n[i]==t){
            
                v.push_back(i);
                
                break;
            }
        }
        
        for(int i=n.size()-1;i>=0;i--){
            if(n[i]==t){
                
                
                v.push_back(i);
                break;
            }
        }
        if(v.size()==0){
            return {-1,-1};
        }
        else{
            return v;
        }
        
    }
};
