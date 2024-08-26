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

void insert_tail(Node *&head, Node *&tail, int val) {
    Node* newNode = new Node(val);
    if(tail==NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insert_value(Node* &head, Node* &tail) {
    int val;
    while(true) {
        cin >> val;
        if(val == -1) break;
        insert_tail(head, tail, val);
    }
}

bool check_palindrome(Node* head, Node* tail) {
    if(head == NULL || tail == NULL) return true;
    Node* i = head;
    Node* j = tail;
    while (i!=NULL && j!=NULL && i!=j && i->prev!=j) {
        if(i->val!=j->val) return false;
        i = i->next;
        j = j->prev;
    } return true;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    insert_value(head, tail);

    if(check_palindrome(head, tail)) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
