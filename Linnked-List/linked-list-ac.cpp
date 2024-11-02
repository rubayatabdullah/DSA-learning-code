#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        this->data = val;
        this->next = nullptr;
    }
};

//insert an element in the front through a node pointer

Node* insertAtFront(Node* head, int value) {
    Node *new_node = new Node(value);
    new_node->next = head;

    return new_node;
}

//Insert a node after a given node

Node* insertAfter(Node* head, int key, int value) {
    Node *curr = head;
    while(curr != nullptr) {
        if(curr->data == key)
            break;
        curr = curr->next;
    }

    if(curr == nullptr)
        return head;

    Node *new_node = new Node(value);
    new_node->next = curr->next;
    curr->next = new_node;

    return head;
}

//Insert a node before a given node

Node* insertBefore(Node* head, int key, int value) {
    //if the node is empty
    if(head == nullptr)
        return nullptr;

    //Special-case: if the key is the first element
    if(head->data == key) {
        Node *new_node = new Node(value);
        new_node->next = head;

        return new_node;
    }

    //Common case
    Node *curr = head;
    Node *prev = nullptr;

    while(curr != nullptr && curr->data != key) {
        prev = curr;
        curr = curr->next;
    }

    //If the key is found
    if(curr != nullptr) {
        Node *new_node = new Node(value);
        prev->next = new_node;
        new_node->next = curr;
    }

    return head;
}

//insert a element in the specific node in the linked list

Node* insertSpecific(Node* head, int position, int data) {
    Node *newNode = new Node(data);

    //if position is head
    if(position == 1) {
        newNode->next = head;
        head = newNode;
        return head;
    }

    //if position is not head
    Node *curr = head;
    for (int i = 0; i < position - 1 && curr != nullptr; ++i) {
        curr = curr->next;
    }

    //if out of bounds 
    if(curr == nullptr) {
        cout << "Position is out of bound" << endl;
        delete newNode;
    }

    //add the node to the position
    newNode->next = curr->next;
    curr->next = newNode;
    return head;
}

//insert at the end 
Node* insertAtEnd(Node* head, int data) {
    Node *newNode = new Node(data);

    if(head == nullptr)
        return newNode;

    Node *last = head;

    while(last != nullptr) {
        last = last->next;
    }

    last->next = newNode;

    return head;
}

void printList(Node *head)
{
    Node *temp = head;

    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *head = new Node(2);
    head->next = new Node(3);
    head->next->next = new Node(4);
    head->next->next->next = new Node(5);

    //add-front
    head = insertAtFront(head, 1);
    head = insertAfter(head, 4, 6);
    head = insertBefore(head, 4, 11);
    head = insertBefore(head, 1, 11);

    printList(head);
    return 0;
}