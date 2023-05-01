DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
    if(head == nullptr)
        return new DoublyLinkedListNode(data);
    if(data <= head->data){
        DoublyLinkedListNode* newNode = new DoublyLinkedListNode(data);
        newNode->next = head;
        head->prev = newNode;
        return newNode;
    }
    DoublyLinkedListNode* newNode = sortedInsert(head->next, data);
    head->next = newNode;
    newNode->prev = head;
    return head;
}