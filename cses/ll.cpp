#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node() {
        next = NULL;
    }
};

int main() {

    Node* head = NULL;
    Node* curr = NULL;

    while (true) {
        int n;
        cin >> n;

        if (n == -1) {
            break;
        }

        Node* newNode = new Node();
        newNode->data = n;

        if (head == NULL) {
            head = newNode;
            curr = newNode;
        } 
        else {
            curr->next = newNode;
            curr = newNode;
        }
    }

    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}