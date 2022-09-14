/*
  Node is defined as 
struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
}*head;
*/
class Solution
{
    public:
    int count(struct node* head, int search_for)
    {
    //add your code here
    node * temp=head;
    int cnt=0;
    while(temp!=NULL){
        int val=temp->data;
        if(val==search_for){
            cnt++;
        }
        temp=temp->next;
    }
    return cnt;
    }
};