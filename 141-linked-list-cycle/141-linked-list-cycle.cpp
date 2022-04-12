/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
      //first check if head ==Null or head->nEXT ==null means single node and no node in both condition no cycle exist
        
        
        if(head==NULL||head->next==NULL){
            return false;
        }
        ListNode* slow=head; //creating two pinters slow and fast slow takes one step then fast takes two step
        ListNode* fast=head;
        while(fast->next&&fast->next->next){//checking if either of case becomes null since it is and operator it will make false sp it will exit the loop 
            //actually the condition i while loop is when fast poiner is sab=nding a last and second last node
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                return true;
            }
        }
        return false;
    }
};