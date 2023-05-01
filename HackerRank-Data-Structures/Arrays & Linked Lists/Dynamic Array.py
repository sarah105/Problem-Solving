def dynamicArray(n, queries):
    lastAnswer = 0
    array =  []
    for i in range (0, n):
        array.append([])
    res =[]
    for i in queries:
        index = (i[1] ^ lastAnswer) % n
        if i[0] == 1:
            array[index].append(i[2])
        else:
            lastAnswer = array[index][i[2] % len(array[index])]
            res.append(lastAnswer)
    return res
            