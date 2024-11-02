#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node *next;

        Node(int data) {
            this->data = data;
            this->next = nullptr;
        }
};

//insert element at end
void insertAtTail(Node* &head, int data) {
    
    Node *newNode = new Node(data);

    if(head == nullptr){
        head = newNode;
        return;
    }

    Node *curr = head;

    while(curr->next != nullptr) {
        curr = curr->next;
    }
    curr->next = newNode;
}

//insert at head
void insertAtHead(Node* &head, int data) {
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

//searching in the linked list
bool search(Node* head, int key) {
    Node *temp = head;

    while(temp != nullptr) {
        if(temp->data == key)
            return true;

        temp = temp->next;
    }
    return false;
}

//delete at head
void deleteHead(Node* head) {
    Node *todelete = head;
    head = head->next;
    delete todelete;
}

//delete from the linked list
void deleteElement(Node* &head, int data) {
    if(head == nullptr)
        return;

    if(head->next == nullptr){
        deleteHead(head);
        return;
    }

    Node *temp = head;
    
    while(temp->next->data != data) {
        temp = temp->next;
    }
    Node *todelete = temp->next;

    temp->next = temp->next->next;
    delete todelete;
}

void printList(Node* head) {
    Node *curr = head;

    while(curr != nullptr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

//reverse a linked list
Node* reverseList(Node* &head) {
    Node *prev = nullptr;
    Node *curr = head;
    Node *nextptr;

    while(curr != nullptr) {
        nextptr = curr->next;
        curr->next = prev;

        prev = curr;
        curr = nextptr;
    }

    return prev;
}

//recursive reverse
Node* reverseRecursive(Node* &head) {
    if(head == nullptr || head->next == nullptr)
        return head;

    Node *newHead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = nullptr;

    return newHead;
}

int main()
{
    Node *head = nullptr;
    insertAtTail(head, 1); 
    insertAtTail(head, 2); 
    insertAtTail(head, 3); 
    insertAtTail(head, 4); 
    insertAtTail(head, 5);
    // deleteElement(head, 4);

    printList(head);

    Node *newHead = reverseList(head);
    printList(newHead);
    // cout << search(head, 4) << endl;
    // cout << search(head, 9) << endl;
    return 0;
}