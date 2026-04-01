#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int val;
    node* next;

    node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void delete_at_tail(node* &head) {
   
    if (head == NULL) {
        cout << "List is empty, nothing to delete." << endl;
        return;
    }

    
    if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }

    
    node* temp = head;
   
    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    
    node* deleteNode = temp->next; 
    temp->next = NULL;             
    delete deleteNode;             
}

void print_linklist(node* head) {
    node* temp = head;
    if (temp == NULL) {
        cout << "List is empty.";
    }
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    node* head = new node(10);
    node* a = new node(20);
    node* b = new node(30);

    head->next = a;
    a->next = b;

    cout << "Original list: ";
    print_linklist(head);

    delete_at_tail(head);
    cout << "After deleting tail: ";
    print_linklist(head);

    return 0;
}
