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
    void deleteNode(ListNode* node) {
        
        ListNode* ptr = node;
        
        // ListNode*
        while(ptr->next!=NULL){
            ptr->val = ptr->next->val;
            ptr = ptr->next;
           
        }
        // ListNode* q = node->next;
    
        
        ListNode* p = node;
        ListNode* q = node->next;
        
        while(q->next!=NULL){
            p= p->next;
            q= q->next;
        }
            p->next = NULL;
//         ListNode* qtr = node;
//         while(qtr->next ==NULL){
//             qtr = qtr->next;
//         }
        
//         qtr->next = NULL;
    }
};