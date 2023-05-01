bool has_cycle(SinglyLinkedListNode* head) {
    set<SinglyLinkedListNode*> s;
    while(head != nullptr){
        if(s.find(head)!= s.end()) return true;
        s.insert(head);
        head = head->next;
    }
    return false;
}