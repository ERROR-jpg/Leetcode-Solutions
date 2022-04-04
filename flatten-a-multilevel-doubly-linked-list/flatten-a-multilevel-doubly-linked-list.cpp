/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        for(auto it = head; it!=NULL;it=it->next){
            if(it->child){
                Node *next=it->next;
                it->next =it->child;
                Node *p=it->child;
                p->prev=it;
                it->child=NULL;
                while(p->next){
                    p=p->next;
                }
                p->next=next;
                if(next)
                    next->prev=p;
            }
        }
        return head;
    }
};