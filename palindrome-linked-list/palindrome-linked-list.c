/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


bool isPalindrome(struct ListNode* head){
    if(head==NULL)
        return false;
    if(head->next==NULL)
        return true;
    struct ListNode*new=NULL,*temp=head;
    while(head!=NULL)
    {
        struct ListNode*p=NULL;
        p=(struct ListNode*)malloc(sizeof(struct ListNode));
        p->val=head->val;
        if(new==NULL)
        {
            new=p;
            new->next=NULL;
        }
        else
        {
            p->next=new;
            new=p;
        }
        head=head->next;
    }
    int flag=0;
    while(temp!=NULL)
    {
        if(temp->val!=new->val)
        {
            flag=1;
            break;
        }
        temp=temp->next;
        new=new->next;
    }
    if(flag==0)
        return true;
    else
        return false;
}