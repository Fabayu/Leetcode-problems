/*
-->>Need to iterate over all the flowerbed and we need to focus our attention on the fact where we can plant flower. The flower can only be planted where there is a no flower yet. So, we need to search for the position where value is 0.

-->> start from 1st index and we will move till we find a value i.e. 0 & going forward we find a place which has no flower. Now the condition says there should not be any flower adjacent to this flower. So, in order to place this flower we have to make sure that there is no adjacent flower.
So, we need to check these two position i.e. previous position & next position.


--->>flower exist in previous position, we can't plant a flower at this place. So, we move our pointer to next index. As we move here we again check for adjacent flowers. As there are no flowers present adjacent to this empty place, so we will plant a flower. And also keep a count of that we have planted a flower at this place





Actually decrement 'n' each time we find a suitable spot to place the flower. eg: n = 1, flowerbed = [0, 0, 0, ......, 0] where the length = 2 * 10^4
If n reaches 0, we don't need to continue iterating the for loop and return true straightaway.
If n doesn't reach 0 and we reach the end of the loop, we just return if n is 0 or not.





*/

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
         int cnt = 0;
        
        for(int i = 0; i < flowerbed.size(); i++){
            if(flowerbed[i] == 0){
                int pre= (i == 0 || flowerbed[i - 1] == 0) ? 0 : 1;
                int next = (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0) ? 0 : 1;
                
                if(pre == 0 && next == 0){
                    flowerbed[i] = 1;
                    cnt++;
                }
            }
        }
        return cnt >= n;

  
    }
};