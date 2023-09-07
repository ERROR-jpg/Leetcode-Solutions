class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int size{};
        ListNode *cur = head;
        while(cur){
            cur=cur->next;
            size++;
        }
        int q=size/k;
        int r=size%k;

        vector<ListNode*>vals(k,nullptr);
        cur=head;

        int i{};

        while(cur!=nullptr){
            ListNode *temp=new ListNode(cur->val);
            vals[i]=temp;

            for(int j=1;j<q;j++){
                temp->next=cur->next;
                temp=temp->next;
                cur=cur->next;
                if(cur==nullptr)return vals;
            }
            if(r && q){
                temp->next=cur->next;
                temp=temp->next;
                cur=cur->next;
                r--;
            }
            cur=cur->next;
            temp->next=nullptr;
            i++;
        }
        return vals;
    }
};