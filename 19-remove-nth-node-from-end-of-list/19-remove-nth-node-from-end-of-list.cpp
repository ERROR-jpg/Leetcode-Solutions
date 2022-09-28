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
    int lengthofll(ListNode* head){
        ListNode *p = head;
        int l=0;
        while(p->next!=NULL){
            l++;
            p = p->next;
        }
        return l;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len1 = lengthofll(head);
        int len2 = len1-n+2;
        
        if(len2==1){
            ListNode *p = head;
            head = head->next;
            p->next =NULL;
            return head;
        }else{
            ListNode *p=head;
            int i =2;
            while(i!=len2){
                p=p->next;
                i++;
            }
            ListNode *q =p->next;
            p->next = q->next;
            delete(q);
            return head;
        }
        
    }
};