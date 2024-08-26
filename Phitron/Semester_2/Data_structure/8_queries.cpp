#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void print_List(Node* head) {
    Node* temp = head;
    while(temp!=NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insert_Head(Node* &head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insert_Tail(Node* &head, int val) {
    Node* newNode = new Node(val);
    if(head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next!=NULL) temp = temp->next;
    temp->next = newNode;
}

void delete_Index(Node* &head, int index) {
    if (head == NULL) return;

    if (index == 0) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;
    for (int i = 0; temp != NULL && i < index - 1; i++) temp = temp->next;

    if (temp == NULL || temp->next == NULL) return;

    Node* deleteIndex = temp->next;
    temp->next = temp->next->next;
    delete deleteIndex;
}

int main() {
    Node* head = NULL;
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int X, V;
        cin >> X >> V;

        if (X == 0) insert_Head(head, V);
        else if (X == 1) insert_Tail(head, V);
        else if (X == 2) delete_Index(head, V);
        
        print_List(head);
    }

    return 0;
}
