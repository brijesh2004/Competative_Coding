
class Solution{
public:
    ListNode *moveToFront(ListNode *head){
        ListNode * temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
      
       temp-> next=head;
       head= temp;
       while (temp->next!=head){
           temp=temp->next;
       }
       temp->next=NULL;
        return head;
    }
};