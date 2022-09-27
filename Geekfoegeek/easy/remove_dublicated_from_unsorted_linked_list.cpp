The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/


class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
        if(head==NULL) return NULL;
       unordered_map<int,int> visited;
       
       Node * temp = head;
       visited[temp->data] = 1;
       while(temp->next!=NULL)
       {
           if(visited.count(temp->next->data))
           {
               temp->next = temp->next->next;
           }
           else{
               temp = temp->next;
               visited[temp->data] = 1;
           }
       }
       
       return head;
    }
};