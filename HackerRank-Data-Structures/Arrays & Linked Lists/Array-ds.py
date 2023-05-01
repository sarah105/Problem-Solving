def reverseArray(a):
    res = []
    for i in range (0,len(a)):
        res = res + [a[len(a)-1-i]]
    return res
