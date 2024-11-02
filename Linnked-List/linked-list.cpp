#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int new_value)
    {
        this->data = new_value;
        this->next = nullptr;
    }
};

Node *insertAtFront(Node *head, int new_data)
{
    Node *new_node = new Node(new_data);
    new_node->next = head;

    return new_node;
}

void printList(Node *head)
{
    Node *curr = head;

    while (curr != nullptr)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main()
{
    Node *head = new Node(2);
    head->next = new Node(3);
    head->next->next = new Node(4);
    head->next->next->next = new Node(5);

    int data = 1;
    head = insertAtFront(head, data);
    printList(head);

    return 0;
}