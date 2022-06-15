
LinkedListNode<int> *reverse(LinkedListNode<int> *head){
    LinkedListNode<int> *prev ,*next , *temp = head;
    while(temp){
        next = temp->next;
        temp->next = prev;
        prev = temp;
        temp = next;
    }
    return prev;
}
bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
     if(head==NULL||head->next==NULL) return true;
        
    LinkedListNode<int>* slow = head;
    LinkedListNode<int>* fast = head;
        
    while(fast->next!=NULL&&fast->next->next!=NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
        
    slow->next = reverse(slow->next);
    slow = slow->next;
    LinkedListNode<int>* dummy = head;
        
    while(slow!=NULL) {
        if(dummy->data != slow->data) return false;
        dummy = dummy->next;
        slow = slow->next;
    }
    return true;

}