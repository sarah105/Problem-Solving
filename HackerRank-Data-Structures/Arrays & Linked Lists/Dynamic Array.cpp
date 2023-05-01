vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    int lastAnswer = 0;
    vector<vector<int>> arr(n);
    /*for(int i = 0 ; i < n ; i++){
        arr.Add(List<int> item);
    }*/
    vector<int> res;
    for(int i = 0 ; i < queries.size() ; i++){
        int index = (queries[i][1] ^ lastAnswer) % n;
        if (queries[i][0] == 1)
            arr[index].push_back(queries[i][2]);
        else
        {
            lastAnswer = arr[index][queries[i][2] % arr[index].size()];
            res.push_back(lastAnswer);
        }
            
    }
        
    return res;
}