def removeDuplicates(llist):
    head = llist
    current = llist
    llist = llist.next
    while llist != None :
        if current.data == llist.data:
            llist = llist.next
            current.next = llist
            continue
        current.next = llist
        current = current.next
        llist = llist.next
    return head
