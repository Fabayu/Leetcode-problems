class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& num, int target) {
//                 vector<vector<int> > res;
//         if(nums.size()==0){
//             return res;
//         }

//         sort(nums.begin(),nums.end());
        
//         int n=nums.size();
//        for(int i=0;i<n;i++){
//            for(int j=i+1;j<n;j++){
//                int front=j+1;
//                int back=n-1;
//                int req=target-nums[i]-nums[j];
//                while(front<back){
//                    int two_sum=nums[back]+nums[front];
//                    if(two_sum<req) front++;
//                    else if(two_sum>req) back--;
//                    else{
//                        vector<int> quad(4,0);
//                        quad[0]=nums[i];
//                            quad[1]=nums[j];
//                            quad[2]=nums[front];
//                            quad[3]=nums[back];
//                        res.push_back(quad);
                          
                                 
//                   while(front<back && nums[front]==quad[2])--front;
//                    while(front<back &&nums[back]==quad[3])--back;
//                    }
//                }
//                while(j+1<n&& nums[j]==nums[j+1])++j;
               
//            }
//            while(i+1<n && nums[i]==nums[i+1])++i;
//            }
    
       
//         return res;
// }
        
        vector<vector<int> > res;
    
        if (num.empty())
            return res;
    
        sort(num.begin(),num.end());
    
        for (int i = 0; i < num.size(); i++) {
        
          
        
            for (int j = i + 1; j < num.size(); j++) {
            
                int target_2 = target- num[j]- num[i];
            
                int front = j + 1;
                int back = num.size() - 1;
            
                while(front < back) {
                
                    int two_sum = num[front] + num[back];
                
                    if (two_sum < target_2) front++;
                
                    else if (two_sum > target_2) back--;
                
                    else {
                    
                        vector<int> quadruplet(4, 0);
                        quadruplet[0] = num[i];
                        quadruplet[1] = num[j];
                        quadruplet[2] = num[front];
                        quadruplet[3] = num[back];
                        res.push_back(quadruplet);
                    
                        // Processing the duplicates of number 3
                        while (front < back && num[front] == quadruplet[2]) ++front;
                    
                        // Processing the duplicates of number 4
                        while (front < back && num[back] == quadruplet[3]) --back;
                
                    }
                }
                
                // Processing the duplicates of number 2
                while(j + 1 < num.size() && num[j + 1] == num[j]) ++j;
            }
        
            // Processing the duplicates of number 1
            while (i + 1 < num.size() && num[i + 1] == num[i]) ++i;
        
        }
    
        return res;}
};