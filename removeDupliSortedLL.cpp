// root: head node
Node *removeDuplicates(Node *root)
{
    Node *curr=root;
    Node *pos=root;
    if(curr==NULL || curr->next==NULL)
        return curr;
    
    for(;curr->next!=NULL;){
        Node *prev=curr;
        while(curr->next->data==prev->data){ //checking if next node is same
            curr=curr->next;
            if(curr->next==NULL)   
                break;
        }
        prev->next=curr->next;
        if(curr->next==NULL)   
                break;
        curr=curr->next;
    }

    return root;
}
