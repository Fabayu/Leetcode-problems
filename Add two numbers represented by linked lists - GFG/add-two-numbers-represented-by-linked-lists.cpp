// { Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


 // } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node *reverse(Node *head)
   {
        struct Node *previous=NULL;
       struct Node*current=head;
       
       while(current)
       {
           struct Node *next=current->next;
           current->next=previous;
           previous=current;
           current=next;
       }
       return previous;
   }
   struct Node* addTwoLists(struct Node* first, struct Node* second)
   {
       struct Node *ans=NULL;
       struct Node *ans_temp=ans;
       
       struct Node* first_rev=reverse(first);
       struct Node *second_rev=reverse(second);
       
       int carry=0;
       
       while(first_rev!=NULL && second_rev!=NULL)
       {
           int sum=first_rev->data+second_rev->data+carry;
           struct Node* newNode=new struct Node(sum%10);
           if(ans==NULL)
           {
               ans=newNode;
               ans_temp=newNode;
           }
           else
           {
               ans->next=newNode;
               ans=ans->next;
           }
           carry=sum/10;
           
           first_rev=first_rev->next;
           second_rev=second_rev->next;
       }

       while(first_rev)
       {
           int sum=first_rev->data+carry;
           struct Node* newNode=new Node(sum%10);
           carry=sum/10;
           ans->next=newNode;
           ans=ans->next;
           first_rev=first_rev->next;
       }
       
       
       while(second_rev)
       {
           int sum=second_rev->data+carry;
           struct Node* newNode=new Node(sum%10);
           carry=sum/10;
           ans->next=newNode;
           ans=ans->next;
           second_rev=second_rev->next;
       }
       
       if(carry != 0)
       {
           struct Node* newNode=new Node(carry);
           ans->next=newNode;
           ans=ans->next;
       }
       
       return reverse(ans_temp);  // code here
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends