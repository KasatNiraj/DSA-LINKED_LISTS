/* Function to insert into a Doubly Linked List */
void addNode(Node *head, int pos, int data)
{
    Node *newnode=new Node(data); //creating a new node
    Node *curr=head;
    for(int i=0;i<pos;i++)  //shifting to the position where
        curr=curr->next;    //new node is to be inserted
    if(curr->next==NULL){   //checking if pos is last position in ll
        curr->next=newnode;
        newnode->prev=curr;
    }    
    else {                                  
        newnode->next=curr->next;            // Make the new node next as curr node next
        curr->next=newnode;                  // Now change the current node next to new node
        newnode->next->prev=newnode;        // Make the (initial current node next) prev to the new node
        newnode->prev=curr;                  // Make the new node prev as current node
    }
    return;
}
