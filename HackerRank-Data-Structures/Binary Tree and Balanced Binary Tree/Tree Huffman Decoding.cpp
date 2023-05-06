map <string, char> m;

void getSymbolAndIncode(node * root, string incode = ""){
    if(root == nullptr) return;
    if(root -> data && incode != "") {
        m.insert({incode, root->data});
        return;
    }
    getSymbolAndIncode(root->left, incode + '0');
    getSymbolAndIncode(root->right, incode + '1');
}

void decode_huff(node * root, string s) {
    getSymbolAndIncode(root);
    string res = "", temp = "";
    for(char ele : s){
        temp += ele;
        if(m.count(temp)){
            res += m[temp];
            temp = "";
        }
    } 
    cout << res << endl;
}
