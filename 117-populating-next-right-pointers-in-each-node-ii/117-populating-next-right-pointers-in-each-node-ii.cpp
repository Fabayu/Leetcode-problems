/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    void solve(vector<Node*>&v)
    {
        Node* x = v[0];
        for(int i = 1;i<v.size();i++)
        {
            Node* t = v[i];
            x->next = t;
            x = t;
        }
        x->next = NULL;
    }
    Node* connect(Node* root) {
          
        if(root == NULL)
            return NULL;
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            int n = q.size();
            vector<Node*>v;
            for(int i = 0;i<n;i++)
            {
                Node* t = q.front();
                q.pop();
                v.push_back(t);
                if(t->left)
                    q.push(t->left);
                if(t->right)
                    q.push(t->right);

            }
            solve(v);
          
        }
          return root;
    }
};