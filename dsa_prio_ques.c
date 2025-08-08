#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	int priority;
	struct node * next;
};

struct node *head=NULL;

void enquee(){
	int d,p;
	int y=1;

    struct node *nnode,*temp;
    nnode=(struct node*)malloc(sizeof(struct node));
    nnode->next=NULL;
    printf("Enter data: ");
    scanf("%d",&d);
    printf("Enter priority: ");
    scanf("%d",&p);
    nnode->data=d;
    nnode->priority=p;
    if(head==NULL || nnode->priority<head->priority){
    	nnode->next=head;
    	head=nnode;	
	}
	else {
		temp=head;
			while(temp->next!=NULL&& temp->next->priority <= nnode->priority){
				temp=temp->next;
			}
			
			nnode->next=temp->next;
			temp->next=nnode;
	}
    
}

void dequeue(){
	struct node *temp;
	temp=head;
	printf("dequeed element is %d",temp->data);
	head=temp->next;
	free(temp);
	
}

void display(){
	struct node *temp;
	temp=head;
	while (temp!=NULL){
		printf("%d:%d->",temp->data,temp->priority);
		temp=temp->next;
	}
}

int main(){
	int y;
		printf("priority queue menu\n");
  while(1){
 
	printf("\n\n1.Enqueue\n2. Dequeue\n3. Display\n4. Exit");
	printf("\n\nenter your choice ");
	scanf("%d",&y);
	switch(y){
		case 1: {
			enquee();
			break;
		}
		case 2:  {
			dequeue();
			break;
		}
		case 3:  {
			display();
			break;
		}
		case 4:  {
			printf("\nprogram exit");
			return 0;
			break;
		}
		default: {
			printf("\ninvalid choice");
			break;
		}
	}
	 }
}
