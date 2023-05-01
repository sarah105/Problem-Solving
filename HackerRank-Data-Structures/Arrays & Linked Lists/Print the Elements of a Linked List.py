def printLinkedList(head):
    if head == None :
        return
    print(head.data)
    printLinkedList(head.next)
