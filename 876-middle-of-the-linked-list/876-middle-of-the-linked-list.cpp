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
// 
class Solution {
public:
ListNode* middleNode(ListNode* head) {
ListNode* temp=head;
    ListNode* temp2=head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    
    int len=cnt/2;
    while(len!=0){
        temp2=temp2->next;
        len--;
    }
    head=temp2;
    return head;
}
};

