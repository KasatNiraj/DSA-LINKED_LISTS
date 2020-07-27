// Should reverse list and return new head.
// O(1) space solution
struct Node* reverseList(struct Node *head)
{
    Node *curr=head;
    Node *prev=NULL;
    while(curr!=NULL){
        Node *ahead=curr->next; //go to next node as ahead
        curr->next=prev;    //reverse the link
        prev=curr;          //keep moving prev one position ahead
        curr=ahead;         //update current
    }
    return prev;
}



// Should reverse linked list and return new head.
// using O(n) extra space
struct Node* reverseList(struct Node *head)
{
    vector<int> res;
    for(Node *curr=head;curr!=NULL;curr=curr->next){
        res.push_back(curr->data);
        
    }
    for(Node *curr=head;curr!=NULL;curr=curr->next){
        curr->data=res.back();
        res.pop_back();
    }
    return head;
}


// Should reverse list and return new head.
// recursive solution 
// O(n) extra space used for stack
struct Node* reverseList(struct Node *head)
{
    if(head==NULL || head->next==NULL)
        return head;
    Node *res_head=reverseList(head->next);
    Node *res_tail=head->next;
    res_tail->next=head;
    head->next=NULL;
    return res_head;
}
