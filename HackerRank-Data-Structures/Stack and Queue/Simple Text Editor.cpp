#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int q, t, d;
    stack <string> operations;
    string s = "", w = "";
    cin >> q;
    operations.push(s);
    for(int i = 0 ; i < q ; i++){
        cin >> t;
        switch (t) {
            case 1:
                cin >> w;
                s += w;
                operations.push(s);
                break;
            case 2:
                cin >> d;
                s = s.substr(0, s.size() - d);
                operations.push(s);
                break;
            case 3:
                cin >> d;
                cout << s[d-1] << endl;
                break;
            case 4:
                operations.pop();
                s = operations.top();
                break;
            
        }
    }
    return 0;
}

