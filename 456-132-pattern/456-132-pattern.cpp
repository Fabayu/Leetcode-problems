
class Solution {
    typedef struct
    {
        int mini;
        int maxi;
    } minmax;

public:
    bool find132pattern(vector<int>& nums) {
        
        int n = nums.size();
        minmax a[n];
        int mini = nums[0];
        int maxi = nums[0];
        int top = 1;
        for (auto num : nums)    // [3,1,6,5] num[0] 3,3,  num[1] 3,3 1,3  num[2]  1,6  num[3] 1,5,6 found
        {
            //cout <<  mini << ", " << num << ", " << maxi << endl;
            if (num >= maxi)
            {
                maxi = num;
                top = 0;
                a[top].maxi= maxi;
                a[top++].mini= mini;
            } else if (num < mini)
            {
                mini = num;
                a[top].maxi= mini;
                a[top++].mini= mini;
            }
            else
            {
                for(int i = top -1; i>=0 && num>a[i].mini; i--)
                {
                    // cout <<  a[i].mini << ", " << num << ", " << a[i].maxi << endl;
                    if (num >= a[i].maxi)
                        a[i].maxi = num;
                    else return true;
                }
            }
        }
        return false;
    }
};
