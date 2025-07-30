#include <stdio.h>
#include<stdlib.h>

struct node {
	int exp;
	int coeff;
	struct node *next;
};
int main(){
	int y=1;
	struct node* head=NULL, *temp, *nnode,* phead=NULL, *ptemp, *pnnode,*result,*rtemp,*rhead=NULL,*mhead=NULL,*mtemp,*multiply;
	while (y==1){
		int ex;
		printf("enter the  exponent of the term");
		scanf("%d",&ex);
		int cof;
		printf("enter the  coefficient  of the term");
		scanf("%d",&cof);
		nnode=(struct node *)malloc(sizeof(struct node));
		nnode->exp=ex;
		nnode->coeff=cof;
		nnode->next=NULL;
		 if (head == NULL || ex > head->exp) {
            nnode->next = head;
            head = nnode;
        }
		else{
			temp=head;
			while(temp->next !=NULL && ex < temp->next->exp){
				temp = temp->next;
			}
			nnode->next=temp->next;
			temp->next=nnode;
		
		}
		printf("enter 1 for more term and 0 for end");
		scanf("%d",&y);
		
	}
	
	//to display the polynomial 
	temp=head;
	while(temp!=NULL){
		printf("%dx^%d",temp->coeff,temp->exp);
		temp=temp->next;
		if(temp!=NULL){
			printf("+");
		}
	}
	// to get another polynominal
		int p=1;
		printf("\n");
//		while (getchar() != '\n');
	while (p==1){
		int pex;
		printf("enter the  exponent of the term");
		scanf("%d",&pex);
		int pcof;
		printf("enter the  coefficient  of the term");
		scanf("%d",&pcof);
		pnnode=(struct node *)malloc(sizeof(struct node));
		pnnode->exp=pex;
		pnnode->coeff=pcof;
		pnnode->next=NULL;
		 if (phead == NULL || pex > phead->exp) {
            pnnode->next = phead;
            phead = pnnode;
        }
		else{
			ptemp=phead;
			while(ptemp->next !=NULL && pex < ptemp->next->exp){
				ptemp = ptemp->next;
			}
			pnnode->next=ptemp->next;
			ptemp->next=pnnode;
		
		}
		printf("enter 1 for more term and 0 for end");
		scanf("%d",&p);
		
	}
	
	//to display the polynomial 
	ptemp=phead;
	while(ptemp!=NULL){
		printf("%dx^%d",ptemp->coeff,ptemp->exp);
		ptemp=ptemp->next;
		if(ptemp!=NULL){
			printf("+");
		}
	}
	// to add the above two polynomial
	printf("\n");
	temp=head;
	ptemp=phead;
	
	while(temp!=NULL && ptemp !=NULL){
		if(temp->exp==ptemp->exp){
		
		
			result=(struct node *)malloc(sizeof(struct node));
			result->next=NULL;
			result->coeff=temp->coeff+ptemp->coeff;
			result->exp=temp->exp;
			if(rhead==NULL){
				rtemp=rhead=result;
			}
			else{
				rtemp->next=result;
				rtemp=result;
			}
				printf("%dx^%d+",result->coeff,result->exp);
			temp=temp->next;
			ptemp=ptemp->next;
		}
		else if(temp->exp > ptemp->exp){
			result=(struct node *)malloc(sizeof(struct node));
			result->next=NULL;
			result->coeff=temp->coeff;
			result->exp=temp->exp;
			if(rhead==NULL){
				rtemp=rhead=result;
			}
			else{
				rtemp->next=result;
				rtemp=result;
			}
				printf("%dx^%d+",result->coeff,result->exp);
			temp=temp->next;
		}
		else {
			result=(struct node *)malloc(sizeof(struct node));
			result->next=NULL;
			result->coeff=ptemp->coeff;
			result->exp=ptemp->exp;
			if(rhead==NULL){
				rtemp=rhead=result;
			}
			else{
				rtemp->next=result;
				rtemp=result;
			}
				printf("%dx^%d+",result->coeff,result->exp);
			ptemp=ptemp->next;
		}
	}
	while(temp!=NULL){
		result=(struct node *)malloc(sizeof(struct node));
			result->next=NULL;
			result->coeff=temp->coeff;
			result->exp=temp->exp;
			rtemp->next=result;
			rtemp=result;
			printf("%dx^%d+",result->coeff,result->exp);
		temp=temp->next;
	}
		while(ptemp!=NULL){
	result=(struct node *)malloc(sizeof(struct node));
			result->next=NULL;
			result->coeff=ptemp->coeff;
			result->exp=ptemp->exp;
			rtemp->next=result;
			rtemp=result;
			printf("%dx^%d+",result->coeff,result->exp);
		ptemp=ptemp->next;
	}

    //to multiply the above two polynomial
    printf("\n");
    temp=head;
   
    while(temp!=NULL){
         ptemp=phead;
            while(ptemp!=NULL){
                multiply=(struct node *)malloc(sizeof(struct node));
                multiply->next=NULL;
                multiply->coeff=temp->coeff*ptemp->coeff;
                multiply->exp=temp->exp + ptemp->exp;
                if (mhead==NULL)
                {
                  mtemp=mhead=multiply;
                }
                else{
                    mtemp->next=multiply;
                    mtemp=multiply;
                }
                
                ptemp=ptemp->next;
            }

        temp=temp->next;
    }

   
    mtemp=mhead;
    while(mtemp!=NULL){
        printf("%dx^%d+",mtemp->coeff,mtemp->exp);
        mtemp=mtemp->next;
    }

	return 0;
}
