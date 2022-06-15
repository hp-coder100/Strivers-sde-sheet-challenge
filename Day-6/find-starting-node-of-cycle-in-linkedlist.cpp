
Node *firstNode(Node *head)
{
    if(head == NULL||head->next == NULL) return NULL;
      
	//    Write your code here.
    Node *slow = head;
    Node *fast = head;
    Node *temp = head;
    while(fast->next != NULL && fast->next->next != NULL){
        slow = slow ->next;
        fast = fast->next->next;
        if(slow == fast)
        {    while(slow != temp){
            slow = slow->next;
            temp = temp->next;
            
            
            }
         return slow;
         
        }
    }
    return NULL;
}