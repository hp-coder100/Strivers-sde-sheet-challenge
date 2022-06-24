
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    LinkedListNode<int> *prev = NULL;
    LinkedListNode<int> *curr = head;
    while(curr!=NULL){
       LinkedListNode<int> *forward = curr->next;
       curr->next = prev;
       prev = curr;
       curr = forward; 
        
    }
    return prev;
   

}