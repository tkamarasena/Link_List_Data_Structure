# include <stdio.h>
# include <conio.h>
# include <stdlib.h>

struct node{
	int data;
	struct node*next;
	
};

int main (){
	
	int i,n;
	int num[5];
	
	
	struct node*head, *temp;
	struct node*add[5];
	
	//printf("Enter number of data: ");
	//scanf("%d", &n);
	
	
	
	for(i=0;i<5;i++){
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
		
		add[i]=(struct node*) malloc(sizeof(struct node));
		
		num[i]=temp->data;        //storing data in array
		add[i]=temp->next;      // storing memory addressws in pointer type array
		
		
		temp->next=NULL;
		
	}
	
	temp=head;
	
	printf("\nList:\n");
	
	for(i=0;i<5;i++){
		printf("\t%d\t %p\t\n", temp->data, temp->next);
		
	}	
	
	
	
	printf("\nList of array:\n");
	
	for(i=0;i<5;i++){
		printf("\t%p\t %d\t\n", add[i], num[i]);
		
	}	
	
	
	
	
	
	
	
	
	getch();
	return 0;
}
