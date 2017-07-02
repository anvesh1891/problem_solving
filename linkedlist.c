#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
void insert(struct node **,int );
void insert(struct node **head_ref,int data)
{
	struct node* new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=data;
	new_node->next=NULL;
	if(*head_ref==NULL)
	{
		*head_ref=new_node;
		return;
	}
	struct node *last=*head_ref;
	while(last->next!=NULL){
		last=last->next;
	}
	last->next=new_node;
}
static void printlist(struct node* *head_ref){
printf("\n");
struct node* last=*head_ref;
while(last!=NULL)
{
printf("%d ",last->data);
last=last->next;
}
}
static void delete(struct node* *head_ref,int element){
struct node *temp=*head_ref,*prev;
if(temp!=NULL&&temp->data==element)
{
	*head_ref=temp->next;
	free(temp);
}
while(temp!=NULL&&temp->data !=element)
{
	prev=temp;
	temp=temp->next;
}
if(temp==NULL)
	return;
prev->next=temp->next;
free(temp);

}
static int isPalindrome(struct node* *head){
if(*head==NULL)
	return 1;
struct node *p=*head;
struct node *prev=(struct node*)malloc(sizeof(struct node));
prev->data=(*head)->data;
while(p->next!=NULL){
struct node *temp=(struct node*)malloc(sizeof(struct node));
temp->data=p->next->data;
temp->next=prev;
prev=temp;
p=p->next;
}
struct node* p1=*head;
struct node* p2=prev;
while(p1!=NULL)
{
if(p1->data!=p2->data)
return 0;
p1=p1->next;
p2=p2->next;
}
return 1;


}
int main()
{
struct node* head=NULL;
int  i=0;
int ch;
for(i=0;i<9;i++)
{
scanf("%d",&ch);
insert(&head,ch);
}
//printlist(&head);
//delete(&head,4);
//printlist(&head);
printf("\n palindrome %d",isPalindrome(&head));
return 0;
}


