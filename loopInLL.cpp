// SOLUTION 1
//naive method
// O(n^2) time
// O(1) space
bool detectLoop(Node* head)
{
    Node *curr=head;
    while(curr!=NULL){
        Node *temp=head;
        while(temp!=curr){
            if(curr->next==temp)
                return true;
            else
                temp=temp->next;
        }
        curr=curr->next;
    }
    return false;
}



// SOLUTION 2  //O(n) time
// modify the struct node to contain a extra field visited and set it as false
// traverse through every node and mark it visited and set it as true
// if we find a node which is set as true return true 
// else traverse the whole linked list and return false


//SOLUTION 3
//O(n) time
//O(1) extra space
//but the original linked list gets destroyed
bool detectLoop(Node* head)
{
    int x=1;
    Node *curr=head;
    Node *temp=new Node(x);
    while(curr!=NULL){
        if(curr->next==NULL)
            return false;
        if(curr->next==temp)
            return true;
        Node *ahead=curr->next;
        curr->next=temp;
        curr=ahead;
    }
    return false;
}


//SOLUTION 4
//O(n) time
//O(n) extra space
bool detectLoop(Node* head)
{
    unordered_set<Node *> hash;
    for(Node *curr=head;curr!=NULL;curr=curr->next){
        if(hash.find(curr)!=hash.end())
            return true;
        hash.insert(curr);
    }
    return false;
}


//SOLUTION 5
//O(n) time
//O(1) extra space
//floyd cycle detection algorithm
bool detectLoop(Node* head)
{
    Node *slow=head;
    Node *fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
            return true;
    }
    return false;
}
