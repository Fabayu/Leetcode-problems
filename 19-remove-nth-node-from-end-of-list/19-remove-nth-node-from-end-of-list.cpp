 // * Definition for singly-linked list.
 // * struct ListNode {
 // *     int val;
 // *     ListNode *next;
 // *     ListNode() : val(0), next(nullptr) {}
 // *     ListNode(int x) : val(x), next(nullptr) {}
 // *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 // * };
 // */
class Solution {
public:
     ListNode* removeNthFromEnd(ListNode* head, int n) {
    //     ListNode* dummy=new ListNode();
    //     dummy->next=head;
    //     ListNode* fast=dummy;
    //     ListNode* slow=dummy;
    //     for(int i=0;i<n;i++){
    //         fast=fast->next;
    //     }
    //     while(fast->next!=NULL){
    //         fast=fast->next;
    //         slow=slow->next;
    //     }
    //     ListNode* node=slow->next;
    //     slow->next=slow->next->next;
    //     delete(node);
    //     return head;;
        
        
         ListNode** t1 = &head, *t2 = head;
        for(int i = 1; i < n; ++i)
        {
            t2 = t2->next;
        }
        while(t2->next != NULL)
        {
            t1 = &((*t1)->next);
            t2 = t2->next;
        }
        *t1 = (*t1)->next;
        return head;
        
        
    }
};