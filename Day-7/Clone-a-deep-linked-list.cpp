
LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
    // Write your code here.
     LinkedListNode<int>* cloneHead = NULL;
     LinkedListNode<int>* cloneTail = NULL;
        
        LinkedListNode<int>* temp = head;
        while(temp != NULL) {
            
              LinkedListNode<int>* newNode = new LinkedListNode<int>(temp->data);
            if(cloneHead== NULL){
                cloneHead = newNode;
                cloneTail = newNode;
            }
            else
                cloneTail->next = newNode;
            
            cloneTail = newNode;
            temp = temp -> next;
        }
        
        // step 2: insert nodes of Clone List in between originalList
        
        LinkedListNode<int>* originalNode = head;
        LinkedListNode<int>* cloneNode = cloneHead;
        
        while(originalNode != NULL && cloneNode != NULL) {
            LinkedListNode<int>* next = originalNode -> next;
            originalNode -> next = cloneNode;
            originalNode = next;
            
            next = cloneNode -> next;
            cloneNode -> next = originalNode;
            cloneNode  = next;
        }
        
        // step 3: Random pointer copy
        originalNode = head;
        cloneNode = cloneHead;
        
        while(originalNode != NULL && cloneNode != NULL) { 
            
            if(originalNode -> random != NULL) {
                cloneNode ->random = originalNode -> random -> next;
            }
            else
            {
                cloneNode -> random  = NULL;
            }
            
            cloneNode = cloneNode -> next;
            originalNode = originalNode -> next;
        }
        
        //step 4: revert step 2 changes
        LinkedListNode<int>* original = head;
        LinkedListNode<int>* copy = cloneHead;
        
         while (original && copy)
            {
                original->next =
                 original->next? original->next->next : original->next;
         
                copy->next = copy->next?copy->next->next:copy->next;
                original = original->next;
                copy = copy->next;
            }

        // step 5 answer return
        return cloneHead;
}
