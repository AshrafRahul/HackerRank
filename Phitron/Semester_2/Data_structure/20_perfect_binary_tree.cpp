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
    if (val == -1) return NULL;
    
    Node* root = new Node(val);
    queue<Node*> q;
    q.push(root);
    
    while (!q.empty()) {
        Node* current = q.front();
        q.pop();
        
        int leftVal, rightVal;
        cin >> leftVal >> rightVal;
        
        if (leftVal != -1) {
            current->left = new Node(leftVal);
            q.push(current->left);
        }
        
        if (rightVal != -1) {
            current->right = new Node(rightVal);
            q.push(current->right);
        }
    }
    
    return root;
}

int calculate_depth(Node* node) {
    if (node == NULL) return 0;
    return 1 + max(calculate_depth(node->left), calculate_depth(node->right));
}
 
int count_nodes(Node* node) {
    if (node == NULL) return 0;
    return 1 + count_nodes(node->left) + count_nodes(node->right);
}

bool is_perfect_binary_tree(Node* root) {
    int total_nodes = count_nodes(root);
    int height = calculate_depth(root);
    int expected_nodes = pow(2, height) - 1;
    return total_nodes == expected_nodes;
}

int main() {
    Node* root = input_tree();
    if (is_perfect_binary_tree(root)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
