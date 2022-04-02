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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL ||head->next==NULL || head->next->next==NULL){
            return head;
        }
        ListNode *p = head;
        ListNode *q = head;
        int count =0;
        while(p->next){
            p = p->next;
            count++;
        }
        if(count%2==1){
            count=(count/2)+1;
        }else{
            count = count/2;
        }
        
        while(count--){
            p->next=q->next;
            q->next=q->next->next;
            p->next->next=NULL;
            q=q->next;
            p=p->next;
        }
        return head;
        
    }
};