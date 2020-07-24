// function inserts the data in front of the list
Node *insertAtBegining(Node *head, int newData) {
   Node *temp=new Node(newData);
   temp->next=head;
   return temp;
}
