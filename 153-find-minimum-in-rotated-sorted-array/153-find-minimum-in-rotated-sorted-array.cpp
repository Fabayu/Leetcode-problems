class Solution {
public:
    int findMin(vector<int>& arr){
    int lo=0;
        int hi=arr.size()-1;
        while(lo<hi){
            int mid=lo+(hi-lo)/2;
            if(arr[lo]<arr[hi]){
                return arr[lo];
            }
            if(arr[mid]>arr[hi]){
                lo=mid+1;
            }
            else{
                hi=mid;
            }
        }
	return arr[lo];
    }
    
    
};   
    
    
    
    
    
    
//     Case 1. The leftmost value is less than the rightmost value in the list: This means that the list is not rotated.
// e.g> [1 2 3 4 5 6 7 ]

// Case 2. The value in the middle of the list is greater than the leftmost and rightmost values in the list.
// e.g> [ 4 5 6 7 0 1 2 3 ]

// Case 3. The value in the middle of the list is less than the leftmost and rightmost values in the list.
// e.g> [ 5 6 7 0 1 2 3 4 ]

// As you see in the examples above, if we have case 1, we just return the leftmost value in the list. If we have case 2, we just move to the right side of the list. If we have case 3 we need to move to the left side of the list.
// };





    