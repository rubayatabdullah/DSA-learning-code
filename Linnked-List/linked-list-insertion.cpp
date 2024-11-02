#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node *next;

        Node(int data){
            this->data = data;
            this->next = nullptr;
        }
};

Node* insertAtFront(Node* head, int data) {
    Node *newNode = new Node(data);
    if(head==nullptr) {
        head = newNode;
        return head;
    }

    newNode->next = head;
    head = newNode;
    return head;
}

Node* insertAfter(Node* head, int key, int data) {
    Node *curr = head;

    while(curr != nullptr) {
        curr = curr->next;
    }

    if(curr == nullptr)
        return head;

    Node *newNode = new Node(data);
    newNode->next = curr->next;
    curr->next = newNode;

    return head;
}

Node* insertBefore(Node* head, int key, int data) {
    if(head == nullptr)
        return nullptr;
    
    if(head->data == key) {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        return head;
    }

    Node *curr = head;
    Node *prev = nullptr;

    while(curr != nullptr && curr->data != key) {
        prev = curr;
        curr = curr->next;
    }

    Node *newNode = new Node(data);
    prev->next = newNode;
    newNode->next = curr->next;
    return head;
}

Node* insertSpecific(Node* head, int position, int data) {
    Node *newNode = new Node(data);

    if(position == 1) {
        newNode->next = head;
        head = newNode;
        return head;
    }

    Node *curr = head;
    for (int i = 0; i < position - 1 && curr != nullptr; ++i) {
        curr = curr->next;
    }

    if(curr == nullptr) {
        cout << "Position is out of bounds" << endl;
        delete newNode;
    }

    newNode->next = curr->next;
    curr->next = newNode;
    return head;
}

Node* insertAtEnd(Node* head, int data) {
    Node *newNode = new Node(data);

    if(head == nullptr)
        return newNode;

    Node *curr = head;
    while(curr != nullptr) {
        curr = curr->next;
    }

    curr->next = newNode;
    newNode->next = nullptr;

    return head;
}

void printList(Node* head) {
    Node *curr = head;
    while(curr != nullptr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main()
{
    
    return 0;
}