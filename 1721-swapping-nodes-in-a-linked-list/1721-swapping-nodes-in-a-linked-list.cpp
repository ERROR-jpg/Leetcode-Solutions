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
       vector<int> nums;
       ListNode *ptr = head;
        
        while(ptr!=NULL){
            nums.push_back(ptr->val);
            ptr = ptr->next;
        }
        
        int n = nums.size();
        
        swap(nums[k-1], nums[n-k]);
        
        ListNode *newlist = new ListNode(0);
        ListNode *ans = newlist;
        int i = 0;
        while(i!=n){
            newlist->next = new ListNode(nums[i]);
            newlist = newlist->next;
            i++;
        }
    
        
        return ans->next;
    }
};