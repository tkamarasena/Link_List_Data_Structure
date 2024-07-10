# include <stdio.h>
# include <conio.h>
# include <stdlib.h>

void enter_list();
void delete_list();

struct node{
	int data;
	struct node*next;
};

	int i,x,max=5,front=-1,rear=-1;
	int dis;
	
	struct node*head,*temp;



int main(){
	
	
	
	while(dis!=3){
		
		printf("\nDo you need to enter a value: \n\tYes=Y\t No=N\n");
		printf("Enter your dessision: ");
		scanf(" %d", &dis);
		
		switch(dis){
			
			case 1:
				enter_list();
				break;
				
				case 2:
					delete_list();
					break;
					
					case 3:
						break;
						
						default: printf("Invalid selection..\n");
						break;
						
		}
		
	}
	
	/*temp=head;
	
	printf("\nList:\n\t");
	
	for(i=0;i<max;i++){
		printf("%d\t", temp->data);
		temp=temp->next;
	}*/	
	
	
	
	getch();
	return 0;
}

void enter_list(){
	
	if(rear==max-1){
			printf("Overflow..\n");
			
		}
		else{
			printf("Enter a value: ");
			scanf("%d", &x);
			
			if(front==-1 && rear==-1){
			front=0;
			rear=0;
			
			head=(struct node*) malloc(sizeof(struct node));
			temp=head;
			
			}
			else{
				rear++;
			
				temp->next=(struct node*) malloc(sizeof(struct node));
				temp=temp->next;
			}
			
			
			temp->data=x;		
		
			temp->next=NULL;
		
		}
		
	}
		
		



void delete_list(){
	if(front==-1 || front>rear){
		printf("Underflow..");
		
	}
	else{
		
		
		printf("%d is deleted", temp->data);
		temp=temp->next;
		
	}
}
