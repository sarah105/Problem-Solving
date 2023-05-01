
string isBalanced(string s) {
    stack <char> stackArr;
    for(char ele : s){
        
        if(ele == '(' || ele == '[' || ele == '{')
            stackArr.push(ele);
        else if(stackArr.size() == 0)
            return "NO";
        else
        {
            switch (ele) {
                case ')':
                    if(stackArr.top() == '(')
                        break;
                case ']':
                    if(stackArr.top() == '[')
                        break;
                case '}':
                    if(stackArr.top() == '{')
                        break;
                default:
                    return "NO";
            }
            stackArr.pop();
        }
    }
    if(stackArr.size() != 0) return "NO";
    return "YES";
}