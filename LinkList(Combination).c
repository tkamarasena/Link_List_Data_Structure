# include <stdio.h>
# include <conio.h>
# include <stdlib.h>


//void remove();

struct node{
	int data;
	struct node*next;
};

int i,x,y,n;
struct node*head, *temp,*newn,*pre;

int enter_begining();
int enter_end();
int enter_midle();
void remove_begining();
void remove_end();
void remove_midle();
void search();
void main_menu();
void sub_menu1();
void sub_menu2();

int main(){
	
	
	
	printf("Enter a number of valuse: ");
	scanf("%d", &n);
	
	//struct node*head, *temp;
	
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
	
	temp=head;
	
	printf("\nList:\n");
	
	while(temp!=NULL){
		printf("\t%d\t %p\n", temp->data, temp->next);
		temp=temp->next;
	}	
	
	printf("\n=================================================\n");
	while(x!=4){
		
		main_menu();
	
	
	switch(x){
		case 1:
			sub_menu1();
			
			switch(y){
				case 'A':
					enter_begining();
					break;
					
					case 'B':
						enter_midle();
						break;
						
						case 'C':
							enter_end();
							break;
						
						default: printf("\nInvalid selection..\n");
						break;
			}
			break;
			
			
				case 2:
					
					temp=head;				
					if(temp!=NULL){
						
						sub_menu2();
						switch(y){
							case 'A':
							remove_begining();
							break;
						
							case 'B':
								remove_midle();
								break;				
								
									case 'C':
										remove_end();
										break;
								
								
								
								default: printf("\nInvalid selection..\n");
								break;
						}
					}
					
					else{
						printf("\nList is empty..\n");
						break;
					}
										
					break;
					
				
				case 3:
					
					search();
					break;
				
				
				
				case 4:
					break;
				
						default: printf("\nInvalid selection..\n");
						break;
						
		
	}
	

	temp=head;
	
	if(temp!=NULL){
		printf("\nNew List:\n");
	
		while(temp!=NULL){
			printf("\t%d\t %p\n", temp->data, temp->next);
			temp=temp->next;
		}
	}
	
	
	
	printf("\n=================================================\n");
	
	}
	
	
	
	
	
	
	getch();
	return 0;
}


void main_menu(){
	
		printf("\n\t ======Main Menu====== \n");
		printf("\t+                     + \n");
		printf("\t+1.Entere             + \n");
		printf("\t+                     + \n");
		printf("\t+2.Remove             + \n");
		printf("\t+                     + \n");
		printf("\t+3.Search             + \n");
		printf("\t+                     + \n");
		printf("\t+4.Exite              + \n");
		printf("\t+                     + \n");
		printf("\t =====================  \n");
		
		printf("Your Disission: ");
		scanf("%d", &x);
		
		//return x;
	
}

void sub_menu1(){
	
	printf("\n\t =======Sub Menu====== \n");
	printf("\t|                     | \n");
	printf("\t|A.To Begining        | \n");
	printf("\t|                     | \n");
	printf("\t|B.To Midle           | \n");
	printf("\t|                     | \n");
	printf("\t|C.To End             | \n");
	printf("\t =====================  \n");
		
		printf("Your Disission: ");
		scanf(" %c", &y);
	
}

void sub_menu2(){
	printf("\n\t ======Sub Menu======= \n");
	printf("\t|                     | \n");
	printf("\t|A.First Value        | \n");
	printf("\t|                     | \n");
	printf("\t|B.Midle Value        | \n");
	printf("\t|                     | \n");
	printf("\t|C.Last Value         | \n");
	printf("\t =====================  \n");
		
		printf("Your Disission: ");
		scanf(" %c", &y);
}


int enter_begining(){
	printf("\nENTER A DATA TO BIGINING.. \n");    //new part
	
	temp=head;	
	
	newn=(struct node*) malloc(sizeof(struct node));
	
	printf("Enter a data to new node: ");
	scanf("%d", &newn->data);
	
	newn->next=head;
	head=newn;       //end of the new part
	
	
	
	return newn->data;
	
}



int enter_midle(){
	printf("\nENTER A DATA TO MIDLE: \n");    //new part
	
	temp=head;
	
	int plc,count=1;
	
	printf("\nEnter the position: ");
	scanf("%d", &plc);	
	
	newn=(struct node*) malloc(sizeof(struct node));
	
	printf("\nEnter a data to new node: ");
	scanf("%d", &newn->data);
	
	
	while(temp!=NULL){
		pre=temp;
		temp=temp->next;
		count++;
		
		if(count==plc){
			pre->next=newn;
			newn->next=temp;
			//count++;
			break;
		}	
		
	}
	
	return newn->data;
}

int enter_end(){
	printf("\nNEW NODE TO END..\n");
	
	temp=head;
	
	
	
	newn=(struct node*) malloc(sizeof (struct node));
	
	printf("Enter a number to new node: ");
	scanf("%d", &newn->data);	
	
	
	while(temp!=NULL){
		pre=temp;
		temp=temp->next;
	}
	
	pre->next=newn;
	newn->next=NULL;
	
	return newn->data;
}


void remove_begining(){
	
	
		
		temp=head;
	
		printf("\nDELETE FIRST ELEMENT\n..");
	
		head=temp->next;
		free(temp);   //relaesing the memory address which is temp

	
}

void remove_midle(){
	
	printf("\nDELETE MIDLE VALUE\n");
	
	temp=head;
	int plc;
	
	printf("Enetr Your Place: ");
	scanf("%d", &plc);	
	
	
	
	for(i=1;i<plc;i++){
		pre=temp;            
		temp=temp->next;		
		
	
	}
	
	pre->next=temp->next;
	free(temp);
}

void remove_end(){
		
		temp=head;
		if(head==NULL){
			printf("\nList is empty..\n");
			main_menu();
		}
		else{
			printf("\nDELETE LAST VALUE\n");		
		
			while(temp!=NULL){
			pre=temp;            // pre pointer
			temp=temp->next;
			
			if(temp==NULL){
				printf("%d \t %p\n", pre->data, pre);
				free(pre);
				head=NULL;
			}
			else if(temp->next==NULL){
				break;
			}		
		
		}	
			pre->next=NULL;
			free(temp);
		}
		
}

void search(){

	int val;
	temp=head;
	
	printf("\nEnter a value for search: ");
	scanf("%d", &val);
	
	while(temp!=NULL){
		if(temp->data == val){
			printf("\n%d is in the list.", val);
			break;
		}
		else{
			temp=temp->next;
		}
	}
	
	if(temp==NULL){
		printf("\n%d is not in the list.", val);
	}
	
	
	
}










