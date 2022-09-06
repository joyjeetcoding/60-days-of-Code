Node* reverseDLL(Node * head)
{
    Node* previous = NULL;
    Node* curr = head;
    
    while(curr != NULL)
    {
        Node* forward = curr -> next;
        curr -> next = previous;
        curr -> prev = forward;
        
        previous = curr;
        curr = forward;
    }
    
    return previous;
}
