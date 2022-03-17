class Solution {
public:
    void reverseString(vector<char>& s) {
//         int n=s.size();
        
//      for(int i=n-1;i>=0;i--){
//         cout<<s[i]<<" ";
//      }   
        
        for(int i=0;i<s.size()/2;i++){
swap(s[i],s[s.size()-1-i]);
}
    }

    
};