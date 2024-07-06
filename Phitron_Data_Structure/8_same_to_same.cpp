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

    if(head==NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

bool check_equal(Node* head1, Node* head2) {
    while(head1!=NULL && head2!=NULL) {
        if(head1->val!=head2->val) return false;
        head1 = head1->next;
        head2 = head2->next;
    }
    return head1==NULL && head2==NULL;
}

int main() {
    Node* head1 = NULL;
    Node* head2 = NULL;
    Node* tail1 = NULL;
    Node* tail2 = NULL;
    int val;

    while(true) {
        cin >> val;
        if(val == -1) break;
        insert_tail(head1, tail1, val);
    }

    while(true) {
        cin >> val;
        if(val == -1) break;
        insert_tail(head2, tail2, val);
    }

    if(check_equal(head1, head2)) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
