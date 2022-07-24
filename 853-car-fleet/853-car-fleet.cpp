






class Solution {
public:
    int carFleet(int target, vector<int>& p, vector<int>& s) {
      
        
        map<float,float> cars;
        auto fleets=0;
        auto last_time=-1.0f;
        
        for(int i=0;i<p.size();i++){
            cars.insert({-p[i],s[i]});
            
        }
        for(auto &car:cars){
 auto time=(target+car.first)/car.second;
            if(last_time<time){
                fleets++;
                last_time=time;
            }
        }
        return fleets;
    }
};