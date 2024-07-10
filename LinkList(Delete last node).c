# include <stdio.h>
# include <conio.h>
# include <stdlib.h>

struct node{
	int data;
	struct node*next;
};

int main(){
	
	int i,n;
	
	printf("Enter a number of valuse: ");
	scanf("%d", &n);
	
	struct node*head, *temp;
	
	for(i=0;i<n;i++){
		if(i==0){
			head=(struct node*) malloc(sizeof(struct node));
			temp=head;
		}
		else{
			temp->next=(struct node*) malloc(sizeof(struct node));
			temp=temp->next;
		}
		
		printf("Enter a number: ");
		scanf("%d", &temp->data);
		
			
		
		temp->next=NULL;
		
	}
	
	
	printf("\nDELETE LAST VALUE\n");
	
	temp=head;
	
	struct node*pre;
	
	while(temp!=NULL){
		pre=temp;            // pre pointer
		temp=temp->next;		
		
		if(temp->next==NULL){
			break;
		}
		
	}
	
	pre->next=NULL;
	free(temp);	
	
	// display the eliments
		
	temp=head;
	
	while(temp!=NULL){
		
			printf("%p\t %d\t\n", temp->next, temp->data);
			temp=temp->next;
		
		
	}
	
	
	
	
	
	
	getch();
	return 0;
}


