# include <stdio.h>
# include <conio.h>
# include <stdlib.h>

struct node{
	int data;
	struct node*next;
};

int main(){
	int i,n;
	
	struct node*head, *temp;
	
	printf("Enter a number of values: ");
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		if(i==0){
			head=(struct node*) malloc(sizeof(struct node));
			temp=head;
		}
		else{
			temp->next=(struct node*) malloc(sizeof(struct node));
			temp=temp->next;
		}
		
		printf("Enter a number to list: ");
		scanf("%d", &temp->data);
		
		
		temp->next=NULL;
	}
	
	
	printf("\nNEW NODE TO END..\n");
	
	temp=head;
	
	struct node*newn, *pre;
	
	newn=(struct node*) malloc(sizeof (struct node));
	
	printf("Enter a number to new node: ");
	scanf("%d", &newn->data);	
	
	
	while(temp!=NULL){
		pre=temp;
		temp=temp->next;
	}
	
	pre->next=newn;
	newn->next=NULL;
	
	
	temp=head;
	
	printf("\nElements: \n");
	
	while(temp!=NULL){
		printf("%d\t %p\n", temp->data, temp->next);
		temp=temp->next;
	}
	
	
	
	
	
	
	
	
	
	
	getch();
	return 0;
}
