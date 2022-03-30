class MyLinkedList {
    struct Node{
        int val;
        struct Node* next;
        Node(int x): val(x), next(nullptr) {}
    };
    Node *head;
    int size;
public:
    MyLinkedList() {
        head = nullptr;
        size =0;
    }
    
    int get(int index) {
        int res = -1;
        if(index>size)
            return res;
        
        Node *ptr= head;
        while(ptr&&index>0){
            index--;
            ptr = ptr->next;
        }
        if(index == 0 &&ptr!=nullptr)
            res = ptr->val;
        
        return res;
    }
    
    void addAtHead(int val) {
        Node *ptr = new Node(val);
        ptr->next =  head;
        head = ptr;
        size++;
        
    }
    
    void addAtTail(int val) {
        Node *ptr = new Node(val);
        
        if (head == nullptr) {
			head = ptr;
			return;
		}
        
        Node *p = head;
        
        while(p->next!=NULL){
            p=p->next;
        }
        ptr->next = NULL;
        p->next = ptr;
        size++;
            
    }
    
    void addAtIndex(int index, int val) {
        if (index > size)
			return;

		if (index == 0) {
			size++;
			addAtHead(val);
			return;
		}
        
        Node *ptr = new Node(val);
        Node *p = head;
        
        int i =0;
        while(i!=index-1){
            p=p->next;
            i++;
        }
        ptr->next = p->next;
        p->next = ptr;
        size++;
    }
    
    void deleteAtIndex(int index) {
       
        if (index == 0) {
			Node *tmp = head;
			head = head->next;
			size--;
			delete tmp;
			return;
		}
        
       Node *curr = head, *pre = nullptr;
		while(curr && index > 0) {
			pre = curr;
			curr = curr->next;
			index--;
		}

		if (index == 0 && curr != nullptr) {
			Node *tmp = curr;
			pre->next = curr->next;
			size--;
			delete tmp;
		}
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */