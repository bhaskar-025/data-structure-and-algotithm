#include <stdio.h>
#include <stdlib.h>
struct node{
  int digit;
  struct node *next;
};

struct node *head=NULL,*head2=NULL;
struct node *tail=NULL,*tail2=NULL;
void reverse_display(struct node *unit) {
    int stack[100];   
    int top = -1;

  
    while (unit != NULL) {
        stack[++top] = unit->digit;
        unit = unit->next;
    }

    
    while (top >= 0) {
        printf("%d", stack[top--]);
    }
}



void first_number(){
    struct node *nnode,*temp,*pass;
    int y=1;
    while(y==1){

      nnode=(struct node *)malloc(sizeof(struct node));
      
      nnode->next=NULL;
      if(head==NULL){
        printf("enter the unit place number");
      scanf("%d",&nnode->digit);
        head=temp=nnode;
        tail=nnode;
      }
      else{
        printf("enter the next place number");
      scanf("%d",&nnode->digit);
        temp->next=nnode;
        temp=nnode;
        tail=nnode;
      }

      printf("enter 1 ot add next digit or 0 to exit");
      scanf("%d",&y);
    }
    pass=head;
    printf("first number you entered is ");
     reverse_display(pass);
    
   
} 

void second_number(){
    struct node *nnode,*temp,*pass;
    int y=1;
    printf("\n\n now for the second number\n");
    while(y==1){

      nnode=(struct node * )malloc(sizeof(struct node));
      
      nnode->next=NULL;
      if(head2==NULL){
        printf("enter the unit place number");
      scanf("%d",&nnode->digit);
        head2=temp=nnode;
        tail2=nnode;
      }
      else{
        printf("enter the next place number");
      scanf("%d",&nnode->digit);
        temp->next=nnode;
        temp=nnode;
        tail2=nnode;
      }

      printf("enter 1 ot add next digit or 0 to exit\n");
      scanf("%d",&y);
    }
    pass=head2;
       printf("second number you entered is ");
    reverse_display(pass);

   
    
} 

void  substract(){
	struct node *sub,*temp,*temp2,*ahead=NULL,*atemp;;

	temp=head;
	temp2=head2;
	while(temp!=NULL&&temp2!=NULL){
		int p;
		if(temp->digit >= temp2->digit){
			p=temp->digit - temp2->digit;
		}
		else{
			p=(temp->digit +10)-temp2->digit;
			if(temp->next->digit >0)
			temp->next->digit-=1;
			else {
				struct node *borrow;
				borrow=temp->next;
				while(borrow != NULL && borrow->digit == 0){
					borrow->digit=9;
					borrow=borrow->next;
				}
				borrow->digit -=1;
			}
		}
	  
		sub=(struct node *)malloc(sizeof(struct node));
		sub->digit=p;
		sub->next=NULL;
		
		if(ahead==NULL){
			atemp=ahead=sub;
		}
		else {
			atemp->next=sub;
			atemp=sub;
		}
		temp=temp->next;
		temp2=temp2->next;
	}

	
	while(temp!=NULL){
	int p;
		p=temp->digit;
		if(temp->digit >=0){
			p=temp->digit;
		}
		else{
			p=(temp->digit +10);
			temp->next->digit-=1;
		}
		sub=(struct node *)malloc(sizeof(struct node));
		sub->next=NULL;
		sub->digit=p;
	atemp->next=sub;
	atemp=sub;
	sub->next=NULL;
	temp=temp->next;	
	}
//	
//	while(temp2!=NULL){
//	int p;
//		p=temp2->digit + carry;
//		add=(struct node *)malloc(sizeof(struct node));
//		add->next=NULL;
//		add->digit=p%10;
//		carry=p/10;
//	atemp->next=add;
//	atemp=add;
//	add->next=NULL;
//	temp2=temp2->next;	
//	}
	
	
    printf("\nsubsraction is ");
	reverse_display(ahead);
   
    
}





int main(){
 first_number();
 second_number();
 
 substract();
}



