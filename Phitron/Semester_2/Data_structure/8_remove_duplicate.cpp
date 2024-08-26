#include<bits/stdc++.h>
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

void insert_tail(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);
    if(head==NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void print_kinked_list(Node* head) {
    Node* temp = head;
    while(temp!=NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    } cout << endl;
}

void remove_duplicate(Node* head) {
    if(head==NULL || head->next==NULL) return;

    Node* temp = head;
    while(temp!=NULL) {
        Node* tmp = temp;
        while(tmp->next!=NULL) {
            if(tmp->next->val == temp->val) {
                Node* duplicate = tmp->next;
                tmp->next = tmp->next->next;
                delete duplicate;
            } else tmp = tmp->next;
        } temp = temp->next;
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int val;

    while(true) {
        cin >> val;
        if(val == -1) break;
        insert_tail(head, tail, val);
    }

    remove_duplicate(head);
    print_kinked_list(head);

    return 0;
}
