
LinkedListNode<int>* removeKthNode(LinkedListNode<int> *head, int K)
{
    if(head==NULL)
        return head;
    LinkedListNode<int> * start = new LinkedListNode<int>(-1);
        start->next = head;
    
    LinkedListNode<int>* fast = start;
    LinkedListNode<int>* slow = start;     

        for(int i = 0; i < K; ++i)
            fast = fast->next;
    
        while(fast->next != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        
        slow->next = slow->next->next;
        
        return start->next;
}