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
	
	
	// enter the value midle
	
	
	printf("NEW NODE TO END..ENTER A DATA TO MIDLE: \n");    //new part
	
	temp=head;
	
	int plc,count=1;
	
	printf("Enter the position: ");
	scanf("%d", &plc);
	
	struct node*newn, *pre;
	
	newn=(struct node*) malloc(sizeof(struct node));
	
	printf("Enter a data to new node: ");
	scanf("%d", &newn->data);
	
	
	while(temp!=NULL){
		pre=temp;
		temp=temp->next;
		count++;
		
		if(count==plc){
			pre->next=newn;
			newn->next=temp;
			break;
		}
	}
	
	       //end of the new part
	
	
	
	// display the eliments
		
	temp=head;
	
	while(temp!=NULL){
		
			printf("%p\t %d\t\n", temp->next, temp->data);
			temp=temp->next;
		
		
	}
	
	
	
	
	
	
	getch();
	return 0;
}	
