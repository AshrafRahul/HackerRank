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

void insert_tail(Node *&head, Node *&tail, int val) {
    Node* newNode = new Node(val);

    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int max_val(Node* head) {
    if(head==NULL) return INT_MIN;

    int current_max = INT_MIN;
    for(Node* i=head; i!=NULL; i=i->next) {
        if(current_max < i->val) current_max=i->val;
    } return current_max;
}

int min_val(Node* head) {
    if(head==NULL) return INT_MAX;

    int current_min = INT_MAX;
    for(Node* i=head; i!=NULL; i=i->next) {
        if(current_min > i->val) current_min=i->val;
    } return current_min;
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

    cout << max_val(head)-min_val(head) << endl;

    return 0;
}
