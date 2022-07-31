
class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return NULL;
        Node *ptr = head, *new_head = new Node(0), *new_ptr = new_head;
        while (ptr) {
            new_ptr->next = new Node(ptr->val);
            m[ptr] = new_ptr->next;
            ptr = ptr->next;
            new_ptr = new_ptr->next;
        }
        ptr = head;
        while (ptr) {
            if (ptr->random)
                m[ptr]->random = m[ptr->random];
            ptr = ptr->next;

        }
        return new_head->next;
    }
private:
    unordered_map<Node*, Node*> m;
};
