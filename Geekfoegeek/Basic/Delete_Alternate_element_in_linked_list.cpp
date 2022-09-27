
/*
Structure of the node of the binary tree
struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    int data = x;
	    next = NULL;
	}
};
*/
// Complete this function
void deleteAlt(struct Node *head){
    // Code here
   Node* temp=head;
   while(temp!=NULL){
       if(temp->next!=NULL){
           temp->next=temp->next->next;
       }
       temp=temp->next;
   }
}