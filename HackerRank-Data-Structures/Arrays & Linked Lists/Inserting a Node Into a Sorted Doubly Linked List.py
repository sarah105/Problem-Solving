def sortedInsert(head, data):
    if head == None:
        return DoublyLinkedListNode(data)
    if data <= head.data:
        newNode = DoublyLinkedListNode(data)
        newNode.next = head
        head.prev = newNode
        return newNode
    
    newNode = sortedInsert(head.next, data)
    head.next = newNode
    newNode.prev = head
    return head