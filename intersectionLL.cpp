/* Should return data of intersection point of two linked
   lists head1 and head2.
   If there is no intersecting point, then return -1. */
int intersectPoint(Node* head1, Node* head2)
{
    Node *curr1=head1,*curr2=head2;
    int length1=0,length2=0,d=0;
    while(curr1!=NULL){ //finding the length of first ll
        length1++;
        curr1=curr1->next;
    }
    while(curr2!=NULL){ //finding the length of next ll
        length2++;
        curr2=curr2->next;
    }
    curr1=head1;    //don't forget this
    curr2=head2;    //  :P
    if(length1>length2){
        d=length1 - length2;
        while(d--){     //traversing the larger ll d positions ahead to make
        curr1=curr1->next;  //both ll of same length
        }
    }
    else{
        d=length2 - length1;
        while(d--){
        curr2=curr2->next;
        }
    }
    while(curr1!=NULL && curr2!=NULL){
        if(curr1==curr2)        //if we find a point where they clash
            return curr1->data; //return the point
        curr1=curr1->next;
        curr2=curr2->next;
    }
    return -1;          //if no intersection point found

}

