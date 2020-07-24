/* Should return data of middle node. If linked list is empty, then  -1*/
int getMiddle(Node *head)
{
    int mid=0;
    Node *res=head;
    if(head==NULL)
        return -1;
    while(head!=NULL && head->next!=NULL){ 
       res=res->next;
       head=head->next->next;
    }
    mid=res->data;
    return mid;
}
