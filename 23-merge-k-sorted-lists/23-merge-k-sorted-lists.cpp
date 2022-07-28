/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int,vector<int>,greater<int>>pq;

        for(int i=0;i<lists.size();i++){
            ListNode* temp=lists[i];
            while(temp!=NULL){
                pq.push(temp->val);
                temp=temp->next;
            }
        }
        ListNode* curr=NULL;
        ListNode* head=NULL;
       while(!pq.empty()){
            int j=pq.top(); 
            pq.pop();
            ListNode *temp=new ListNode(j);
            if(head==NULL){
                head=temp;
                curr=head;
            }
            else{
                curr->next=temp;
                curr=curr->next;
            }
        }
        
        
        
        return head;
    }
};