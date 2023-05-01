q = int(input())
operations = [""]
s, w = "", ""

for i in range(0, q):
    t = list(map(str, input().split()))
    
    if int(t[0]) == 1:
        s += t[1]
        operations.append(s)
    elif int(t[0]) == 2:
        s = s[0:len(s) - int(t[1])]
        operations.append(s)
    elif int(t[0]) == 3:
        print(s[int(t[1]) - 1])
    else:
        operations.pop()
        s = operations[len(operations)-1]
        
