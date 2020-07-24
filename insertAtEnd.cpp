// function appends the data at the end of the list
Node *insertAtEnd(Node* head, int newData)  {
    //handling the condition if ll is already empty
    if(head==NULL)
        return new Node(newData);
    Node *temp=head;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=new Node(newData);
    return head;
   
}
