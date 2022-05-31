
#include<bits/stdc++.h>
using namespace std;
int main(){
   stack<int> que;
   int n;
   cin>>n;
   while(n--){
       int size;
       cin>>size;
       while(size--){
           int temp;
           cin>>temp;
           que.push(temp);

       }
       while(!que.empty()){
           cout<<que.top()<<" ";
           que.pop();
       }
       cout<<endl;
   }

}

