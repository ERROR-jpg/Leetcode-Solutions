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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *empty = NULL;
        if(head==NULL) return head;
        if(head->next==NULL) return empty;
       ListNode *temp = head;
        
        int count =1;
        while(temp->next!=NULL){
            count+=1;
            temp = temp->next;
        }
        int index = count/2+1;
        temp = head;
        count =1;
        int i =1;
        while(i!=index-1){
            temp = temp->next;
            i+=1;
        }
        ListNode *del = temp->next;
        temp->next = del->next;
        delete(del);
        return head;
    }
};