SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* head;
    if(head1->data < head2->data)
    {
        head = head1;
        head1 = head1->next;
    }else {
        head = head2;
        head2 = head2->next;
    }
    SinglyLinkedListNode* current = head;
    while(head1 != nullptr && head2 != nullptr){
        if(head1->data < head2->data)
        {
            current->next = head1;
            current = current-> next;
            head1 = head1->next;
        }else {
            current->next = head2;
            current = current-> next;
            head2 = head2->next;
        }
    }
    
    while(head1 != nullptr ){ 
        current->next = head1;
        current = current-> next;
        head1 = head1->next;
    }
    
    while(head2 != nullptr ){ 
        current->next = head2;
        current = current-> next;
        head2 = head2->next;
    }
    return head;
}
