struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}*head;
*/


class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
       // Your code here
           while(del->next->next!=NULL){

           del->data=del->next->data;

           del=del->next;

       }

          del->data=del->next->data;

          del->next=NULL;
    }

};