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
    ListNode* middleNode(ListNode* head) {
        struct ListNode *temp = head;
        int nodecount =1;
        while(temp->next!= NULL){
            nodecount+=1;
            temp = temp->next;
        }
        int count = nodecount/2+1;
        nodecount=1;
        temp = head;
        nodecount=1;
        while(nodecount!=count && temp->next!=NULL){
            temp = temp->next;
            nodecount+=1;
        }
        return temp;
    }
};