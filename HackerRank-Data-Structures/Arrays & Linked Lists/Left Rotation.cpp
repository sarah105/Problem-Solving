vector<int> rotateLeft(int d, vector<int> arr) {
    vector<int> res;
    for(int i = 0; i < arr.size() ; i++){
        res.push_back(arr[(i+d)% arr.size()]);
    }
    return res;
}