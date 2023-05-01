int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* headtem2 = head2;
    while(head1 != nullptr && head2 != nullptr){
        if(head1 == head2) return head1->data;
        head2 = head2-> next;
    }
    return findMergeNode(head1->next, headtem2);
}