void topView(Node * root) {
    set <int> s;
    map <int, int> m;
    queue <NewNode*> q;
    q.push(new NewNode(root, 0));
    while (!q.empty()) {
        NewNode* node = q.front();
        if(s.count(node->h) == 0){
            //cout << node->root->data << " ";
            s.insert(node->h);
            m[node->h] = node->root -> data;
        }
        if(node->root->left != nullptr)
            q.push(new NewNode(node->root->left, node-> h - 1));
        if(node->root->right != nullptr)
            q.push(new NewNode(node->root->right, node-> h + 1));
        q.pop();
        
    }
    for(auto ele : m){
        cout << ele.second << " ";
    }
}