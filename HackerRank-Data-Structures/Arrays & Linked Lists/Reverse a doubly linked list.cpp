DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist) {
    DoublyLinkedListNode* tem;
    while(llist -> next != nullptr){ 
        tem = llist -> next;
        llist -> next = llist -> prev;
        llist -> prev = tem;
        llist = tem;
    }
    tem = llist -> next;
    llist -> next = llist -> prev;
    llist -> prev = tem;
    return llist;
}