class Solution {
public:
    int findMin(vector<int>& arr){
        	    
	     int l= 0, h = arr.size()-1;
       while(l<=h){
           int mid = l + (h-l)/2;
           
           if(arr[mid]>arr[arr.size()-1]){
               l = mid+1;
           }
           else{
               
           h = mid-1;
           
       }
           
       }
       
       return arr[l];
	
    }
};


// noticed what?     Ayush  :)
    
    
// :  in even        ..    ..   (low->mid    mid->+1,high)   equal distrib
// :in odd           ...   ..    (low->mid    mid->+1,high)  not equal
// :lo<hi      because if single no need to do anything
// :if mid<hi   go search on left  ^^^^^^^^
// :if mid >hi  idhr hi h idhr hi h on right side




    