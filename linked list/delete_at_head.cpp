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


void delete_at_head(node* &head) {
    
    if (head == NULL) {
        cout << "List is already empty!" << endl;
        return;
    }

   
    node* temp = head;

    
    head = head->next;

    
    delete temp;
}

void print_linklist(node* head) {
    node* temp = head;
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

    cout << "Original List: ";
    print_linklist(head);

    
    delete_at_head(head);
    cout << "After 1st deletion: ";
    print_linklist(head);

    
    delete_at_head(head);
    cout << "After 2nd deletion: ";
    print_linklist(head);

    return 0;
}
