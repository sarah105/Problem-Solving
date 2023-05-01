def findMergeNode(head1, head2):
    headtem2 = head2
    while head1 != None and head2 != None:
        if head1 == head2 :
             return head1.data
        head2 = head2.next
    
    return findMergeNode(head1.next, headtem2)
