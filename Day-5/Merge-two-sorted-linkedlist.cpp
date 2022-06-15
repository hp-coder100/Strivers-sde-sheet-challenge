
Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    
    // Write your code here.
    Node<int>* result = new Node<int>(-1);
    Node<int>* tail = result;
    while(first != NULL && second != NULL){
        int firstValue = first->data;
        int secondValue = second->data;
        
        if(firstValue <= secondValue){
            tail->next = first;
            tail = first;
            first = first->next;
        }
        else{
            tail->next = second;
            tail = second;
            second = second->next;
        }
    }
    
   while(first != NULL){
       tail->next = first;
       tail = first;
       first = first->next;
   }
    
    while(second != NULL){
		tail->next = second;
        tail  = second;
        second = second->next;
    }
    
    return result->next;
}
