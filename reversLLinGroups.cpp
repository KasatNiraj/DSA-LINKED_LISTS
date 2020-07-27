  //Reverse a linked list in groups of size k
  //recursive solution 
  // O(n/k) space required for recursion call stack
struct node *reverse (struct node *head, int k)
{ 
    node *curr=head;
    node *ahead;
    int count=0;
    node *prev=NULL;
    while(curr!=NULL && count<k){
        ahead=curr->next;
        curr->next=prev;
        prev=curr;
        curr=ahead;
        count++;
    }
    if(ahead!=NULL){
        node *res_head=reverse(ahead,k);
        head->next=res_head;
    }
    return prev;
    
}

  //iterative solution
 struct node *reverse (struct node *head, int k)
{ 
    node *curr=head,*prevFirst=NULL;
    bool isFirstPass=true;
    while(curr!=NULL){
        int count=0;
        node *prev=NULL,*first=curr;
        while(curr!=NULL && count<k){
            node *ahead=curr->next;
            curr->next=prev;
            prev=curr;
            curr=ahead;
            count++;
        }
        if(isFirstPass){
            head=prev;
            isFirstPass=false;
        }
        else{
            prevFirst->next=prev;
        }
        prevFirst=first;
    }
    return head;
    
} 
 
