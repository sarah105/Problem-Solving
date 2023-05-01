#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int q;
    cin >> q;
    queue<int> v;
    for(int i = 0 ; i < q ; i++){
        int operationType;
        cin >> operationType;
        if(operationType == 1)
        {
            int x;
            cin >> x;
            v.push(x);
        }
        else if(operationType == 2){
            v.pop();
        }
        else {
            cout << v.front() << endl;
        }
    }
    return 0;
}
