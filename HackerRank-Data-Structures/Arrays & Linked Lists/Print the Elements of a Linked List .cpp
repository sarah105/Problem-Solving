void printLinkedList(SinglyLinkedListNode* head) {
    if(head == nullptr) return;
    cout << head->data << endl;
    printLinkedList(head->next);

}