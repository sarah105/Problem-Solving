void levelOrder(Node * root) {
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* node = q.front();
        cout << node->data << " ";
        if(node->left) q.push(node->left);
        if(node->right) q.push(node->right);
        q.pop();
    }
}