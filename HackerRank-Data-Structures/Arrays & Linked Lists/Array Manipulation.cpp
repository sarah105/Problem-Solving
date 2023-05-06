long arrayManipulation(int n, vector<vector<int>> queries) {
    map<int, long>m; 
    long maxEle = LONG_MIN, sum = 0;
    for(vector<int> ele : queries){
        m[ele[0]] += ele[2];
        m[ele[1]+1] -= ele[2];
    }
    
    for(pair<int, long> ele: m){
        sum += ele.second;
        maxEle = max(maxEle, sum);
    }
    return maxEle;
}