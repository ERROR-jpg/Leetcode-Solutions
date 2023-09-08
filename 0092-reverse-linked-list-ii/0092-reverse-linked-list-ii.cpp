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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummyHead = new ListNode(), *tempHead = dummyHead;
        int nodeCount = right-left+1;
        tempHead->next = head;
        while(--left){
            tempHead = tempHead->next;
        }

        tempHead->next = reverse(tempHead->next, nodeCount);

        return dummyHead->next;
    }

    ListNode* reverse(ListNode* head, int count){
        ListNode *prev = nullptr, *next = nullptr, *tempPtr{head};

        while(count--){
            next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }

        tempPtr->next = next;

        return prev;
    }
};