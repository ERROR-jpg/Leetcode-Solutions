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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL) return head;
        ListNode *ptr= head;
        int length =1;
        while(ptr->next){
            ptr=ptr->next;
            length++;
        }
        ptr->next = head;
        k = k %length;
        int counter = length - k;
        
        for(int i=0;i<counter;i++){
            head= head->next;
            ptr=ptr->next;
        }
        ptr->next =NULL;
        return head;
    }
};