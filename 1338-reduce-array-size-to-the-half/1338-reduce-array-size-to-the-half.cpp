class Solution {
public:
    
    
    //Approach make map then multimap to store reverse of what map stored map should order weements in descending order and also multimap can map two same frequecies ......now iterate through multimap retur if size becomes n/2 otherwiase keep cunting how much you have done subtraction
    int minSetSize(vector<int>& arr) {
        map<int,int > m;
        multimap<int,int,greater<int>> mul;
        //descending order 
        for(auto ele:arr){
            m[ele]++;//stored in map key:val
        }
        for(auto it:m){
            mul.insert({it.second,it.first});//freq-->key
            
        }
        int size_arr=arr.size();
        int cnt=0;
        for(auto it=mul.begin();it!=mul.end();it++){
            size_arr-=it->first;
            cnt++;
            if(size_arr<=arr.size()/2){
                return cnt; 
            }
        }
        
        return -1;
    }
};