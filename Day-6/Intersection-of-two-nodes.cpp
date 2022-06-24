
int findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
    unordered_map<Node *, bool> visited;
    Node* temp1 = firstHead;
    Node* temp2 = secondHead;
    while(temp1 || temp2){
        if(temp1){
            if(visited.find(temp1) != visited.end())
                return temp1->data;
            visited[temp1] = true;
            temp1 = temp1->next;
            
        }
        if(temp2){
            if(visited.find(temp2) != visited.end())
                return temp2->data;
            visited[temp2] = true;
            temp2 = temp2->next;
        }
    }
    return -1;
}