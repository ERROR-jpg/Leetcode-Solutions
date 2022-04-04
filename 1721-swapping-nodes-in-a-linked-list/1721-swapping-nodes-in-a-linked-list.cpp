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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *ptr1 = head;
        ListNode *ptr2 = head;
        ListNode *counter = head;    
        int length = 1;
        while(counter->next!=NULL){
            counter = counter->next;
            length++;
        }
        
        for(int i =1; i<k;i++){
            ptr1 =ptr1->next;
        }
         for(int i =1; i<=(length-k);i++){
            ptr2 =ptr2->next;
        }
        
        swap(ptr1->val, ptr2->val);
            
        return head;
    }
};