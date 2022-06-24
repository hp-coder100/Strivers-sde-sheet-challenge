

Node *rotate(Node *head, int k) {
     // Write your code here.
    if(!head || !head->next ||k==0)
        return head;
    
    int length = 1;
    Node *temp = head;
    while(temp->next != NULL){
        ++length;
        temp = temp->next;
    }
    temp->next = head;
    k= k%length;
    int end = length - k;
    while(end--)temp = temp->next;
    
    head = temp->next;
    temp->next = NULL;
    
    return head;
    
}