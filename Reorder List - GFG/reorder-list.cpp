//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/* Linked list Node */
struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};



// } Driver Code Ends
/* Following is the Linked list node structure */

/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution{ 

public:

    Node *getMid(Node *head){

        Node *slow = head, *fast = head;

        while(fast && fast->next){

            slow = slow->next;

            fast = fast->next->next;

        }

        Node *temp = slow->next;

        slow->next = NULL;

        return temp;

    }

    

    Node *reverse(Node *head){

        Node *p = head;

        Node *nxt, *prev = NULL;

        while(p){

            nxt = p->next;

            p->next = prev;

            prev = p;

            p = nxt;

        }

        return prev;

    }

    

    Node *listReordering(Node *p, Node *q){

        Node *dump = new Node(-1);

        Node *temp = dump;

        int i = 0;

        while(p && q){

            if(i%2 == 0){

                temp->next = p;

                p = p->next;

            }

            else{

                temp->next = q;

                q = q->next;

            }

            temp = temp->next;

            i++;

        }

        while(p){

            temp->next = p;

            p = p->next; 

            temp = temp->next;

        }

        while(q){

            temp->next = q;

            q = q->next; 

            temp = temp->next;

        }

        return dump->next;

    }

    

    void reorderList(Node* head) {

        Node *p = getMid(head);

        p = reverse(p);

        Node *q = head;

        head = listReordering(q,p);

    }


};

//{ Driver Code Starts.



/* Function to create a new Node with given data */
struct Node* newNode(int data) {
    struct Node* new_Node = new Node(data);
    new_Node->data = data;
    new_Node->next = NULL;
    return new_Node;
}

void printList(struct Node* Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {

        temp = head;
        head = head->next;
        free(temp);
    }
}

int main(void) {
    int t, n, m, i, x;

    cin >> t;
    while (t--) {
        struct Node* temp, *head;
        cin >> n;
        cin >> x;
        head = new Node(x);
        temp = head;
        for (i = 0; i < n - 1; i++) {
            cin >> x;
            temp->next = new Node(x);
            temp = temp->next;
        }
        
        Solution ob;
        
        ob.reorderList(head);
        printList(head);
        freeList(head);
    }
    return 0;
}

// } Driver Code Ends