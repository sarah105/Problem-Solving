static void printLinkedList(SinglyLinkedListNode head)
{
    if (head == null) return;
    Console.WriteLine(head.data);
    printLinkedList(head.next);

}