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
	
	
	
	printf("ENTER A DATA TO BIGINING: \n");    //new part
	
	temp=head;
	
	struct node*newn, *pre;
	
	newn=(struct node*) malloc(sizeof(struct node));
	
	printf("Enter a data to new node: ");
	scanf("%d", &newn->data);
	
	newn->next=head;
	head=newn;       //end of the new part
	
	
	// display the eliments
		
	temp=head;
	
	while(temp!=NULL){
		
			printf("%p\t %d\t\n", temp->next, temp->data);
			temp=temp->next;
		
		
	}
	
	
	temp=head;
	
	printf("\nDELETE FIRST ELEMENT\n..");
	
	head=temp->next;
	free(temp);   //relaesing the memory address which is temp
	
	
	
	
	
	
	// display the eliments
		
	temp=head;
	
	while(temp!=NULL){
		
			printf("%p\t %d\t\n", temp->next, temp->data);
			temp=temp->next;
		
		
	}
	
	
	
	
	
	
	getch();
	return 0;
}


	
	
	
	
	
	
	
	
	
	
		
