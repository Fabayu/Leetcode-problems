class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
      
         // (k + arr[i] % k) % k;
        map<int,int> mp;
        for(auto a:arr){
            int rem=(a%k+k)%k;
            mp[rem]++;
        }
        for(auto e:arr){
            int rem=(e%k+k)%k;
            if(rem==0){
              if( mp[rem]%2!=0){
                  return false;
                  
              } 
            }
            else if(2*rem==k){
                if(mp[rem]%2!=0){
                    return false;
                }
            }
            else {
                int of=mp[rem];
                int af=mp[k-rem];
                if(of!=af){
                    return false;
                }
            }
        }
        return true;
    }
};