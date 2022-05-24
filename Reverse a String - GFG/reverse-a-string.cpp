// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}

// } Driver Code Ends


//User function Template for C++

string reverseWord(string str){
    
    
    
    string reversed="";
    for(int i=str.size()-1;i>=0;i--){
        reversed+=str[i];
    }
   return reversed;
   }
   
   

    
    
    
    
    
    
    
//     if(str.size()==0){
//         return str;
//     }
//     return (reversing(str.substr(1,str.size()))+str[0]);    
//     }


// string reverseWord(string str){
// return reversing(str);




///Using Recursion






// string reversing(string str){
//     if(str.size()==0){
//         return str;
//     }
//     return (reversing(str.substr(1,str.size()))+str[0]);    
//     }


// string reverseWord(string str){
// return reversing(str);

// }



///using reverse inbuilt

// reverse(str.begin(),str.end());
// return str;




///


// int size=str.size();
//       for(int i=0;i<size/2;i++){
//   swap(str[i],str[size-i-1]);
//     }
//     return str;
  


