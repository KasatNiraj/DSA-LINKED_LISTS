// head : reference to head of linked list
// function returns the count of nodes in ll
int getCount(struct Node* head){
    int count=0;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    return count;

}
