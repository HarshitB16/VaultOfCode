/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    
    if(head==NULL)
        return NULL;
    struct ListNode*new=NULL;
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
    return new;
}