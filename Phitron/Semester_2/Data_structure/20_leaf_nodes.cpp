#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_tree() {
    int val;
    cin >> val;
    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);

    queue<Node*> q;
    if(root) q.push(root);

    while(!q.empty()) {
        Node* p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node* myLeft;
        Node* myRight;
        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);
        if(r == -1) myRight = NULL;
        else myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if(p->left != NULL) q.push(p->left);
        if(p->right != NULL) q.push(p->right);
    }
    return root;
}

vector<int> find_leaf_nodes(Node* root) {
    vector<int> leaf_nodes;
    if(root == NULL) return leaf_nodes;

    queue<Node*> q;
    q.push(root);

    while(!q.empty()) {
        Node* f = q.front();
        q.pop();

        if(f->left == NULL && f->right == NULL) {
            leaf_nodes.push_back(f->val);
        }

        if(f->left != NULL) q.push(f->left);
        if(f->right != NULL) q.push(f->right);
    }

    return leaf_nodes;
}

int main() {
    Node* root = input_tree();
    vector<int> leaf_nodes = find_leaf_nodes(root);

    sort(leaf_nodes.rbegin(), leaf_nodes.rend());

    for(int val : leaf_nodes) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
