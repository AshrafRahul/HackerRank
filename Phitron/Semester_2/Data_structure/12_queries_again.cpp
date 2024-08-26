#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node* next;
        Node* prev;
    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL; 
    }
};

void insert_head(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);
    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_tail(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);
    if(tail == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insert_at_position(Node* &head, Node* &tail, int pos, int val) {
    if(pos == 0) {
        insert_head(head, tail, val);
        return;
    }

    Node* temp = head;
    for (int i=1; i<=pos-1; i++) {
        if (temp == NULL) {
            cout << "Invalid" << endl;
            return;
        }
        temp = temp->next;
    }
    if (temp == NULL) {
        cout << "Invalid" << endl;
        return;
    }
    Node* newNode = new Node(val);
    newNode->next = temp->next;
    newNode->prev = temp;
    
    if (temp->next != NULL) temp->next->prev = newNode;
    else tail = newNode;

    temp->next = newNode;
}

void print_normal(Node* head) {
    Node* temp = head;
    cout << "L -> ";
    while(temp!=NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    } cout << endl;
}

void print_reverse(Node* tail) {
    Node* temp = tail;
    cout << "R -> ";
    while(temp!=NULL) {
        cout << temp->val << " ";
        temp = temp->prev;
    } cout << endl;
}

int size(Node* head) {
    Node* temp = head;
    int count = 0;
    while(temp!=NULL) {
        count++;
        temp = temp->next;
    } return count;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int t;
    cin >> t;

    while (t--) {
        int pos, val;
        cin >> pos >> val;

        if (pos > size(head)) {
            cout << "Invalid" << endl;
        } else {
            insert_at_position(head, tail, pos, val);
            print_normal(head);
            print_reverse(tail);
        }
    }

    return 0;
}
