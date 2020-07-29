// root: head node
// program to segregrate even and odd nodes in ll
Node *evenOdd(Node *root)
{
    Node *es=NULL,*ee=NULL,*os=NULL,*oe=NULL;
    //initializing even star/end odd start/end nodes as null
    Node *curr=root;
    for(curr=root;curr!=NULL;curr=curr->next){
        if((curr->data)%2==0){ //if even node is encountered
            if(es==NULL){     //if its the first encountered node
                es=curr;
                ee=curr;
            }
            else{           
                ee->next=curr;
                ee=ee->next;
            }
        }
        else{
            if(os==NULL){   //if its the first encountered node
                os=curr;
                oe=os;
            }
            else{
                oe->next=curr;
                oe=oe->next;
            }
        }
    }
     
    if(os==NULL|| es==NULL) //when no changes made to original ll
        return root;
    ee->next=os;        //linking end of even ll to start of odd ll
    oe->next=NULL;      //making the next of last node in odd ll as null
    return es;  
}
