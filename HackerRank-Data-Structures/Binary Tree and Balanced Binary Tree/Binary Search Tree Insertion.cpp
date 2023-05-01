Node * insert(Node * root, int data) {
    if(root == nullptr) return new Node(data);
    Node* newNode;
    if(root->data <= data)
    {
        root -> right = insert(root->right, data);
    } 
    else
    {
        root -> left = insert(root->left, data);
    } 
    return root;
}