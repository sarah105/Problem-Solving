int sum(vector<int> h){
    int sum = 0;
    for(int ele:h){
        sum += ele;
    }
    return sum;
}

set<int> build(vector<int> h){
    int sum = 0;
    set<int> res;
    for(int i = 0; i < h.size(); i++){
        sum += h[h.size()-1-i];
        res.insert(sum);
    }
    return res;
}

set<int> remove(set<int> s, int sum, vector<int> h){
    set<int> res;
    if(s.count(sum)) res.insert(sum);
    for(int i = 0; i < h.size(); i++){
        sum -= h[i];
        if(s.count(sum)) res.insert(sum);
    }
    return res;
}

int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
    int sum1 = sum(h1), sum2 = sum(h2), sum3 = sum(h3);
    set<int> s;
    if(sum1 <= sum2 && sum1 <= sum3)
    {
        s = build(h1);
        s = remove(s, sum2, h2);
        if(!s.size()) return 0;
        s = remove(s, sum3, h3);
    }
    else if(sum2 <= sum1 && sum2 <= sum3)
    {
        s = build(h2);
        s = remove(s, sum1, h1);
        if(!s.size()) return 0;
        s = remove(s, sum3, h3);
    }
    else
    {
        s = build(h3);
        s = remove(s, sum2, h2);
        if(!s.size()) return 0;
        s = remove(s, sum1, h1);
    }
    if(!s.size()) return 0;
    
    return *--s.end();
}
