Node *addTwoNumbers(Node *head1, Node *head2)
{
    // Write your code here.
    Node *result = new Node(-1);
    Node *tail = result;
    Node *temp1 = head1;
    Node *temp2 = head2;
   
    int carry = 0;

    while(temp1 != NULL || temp2 != NULL || carry != 0){
        
        if(temp1 != NULL && temp2 != NULL ){
            carry = temp1->data + temp2->data + carry;
            temp2 = temp2->next;
            temp1 = temp1->next;
        }
        else if(temp1 !=NULL){
            carry = temp1->data + carry;
            temp1 = temp1->next;
        }
        else if(temp2 != NULL){
            carry = temp2->data + carry;
            temp2 = temp2->next;
        }
        int digit = carry % 10;
        carry = carry/10;
        Node *temp = new Node(digit);
        
        tail->next = temp;
        tail = temp;
    }
    
    return result->next;
}