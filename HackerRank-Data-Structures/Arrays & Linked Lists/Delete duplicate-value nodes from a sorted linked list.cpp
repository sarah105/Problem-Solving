SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode* head = llist;
    SinglyLinkedListNode* current = llist;
    llist = llist->next;
    while(llist != nullptr)
    {
        if(current->data == llist->data) {
            llist = llist->next;
            current->next = llist;
            continue;
        }
        current->next = llist;
        current = current->next;
        llist = llist->next;
    }
    return head;
}
