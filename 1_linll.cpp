// 31_jan_2022 
// singly linked list 

// ll by babbar
#include<stdio.h>
#include<conio.h>
// #include<malloc.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *link;
}*start= NULL, *p,*temp;

//  All function declaration 
void insert(int data);
void search(int data);
void successor(int data);
void predecessor(int data);
void firstLocation();
void lastLocation();
void delFirst();
void delLast();
void display();

//  Main function                		//devAlok
int main(){
	int ch,data;
//	struct Node* store;

	do{
		
		printf("Enter 1 to insert data\n");
		printf("Enter 2 to print successor address \n");
		printf("Enter 3 to print predecessor address \n");
		printf("Enter 4 to print first element Location\n");
		printf("Enter 5 to printf last element location \n");
		printf("Enter 6 to delete from first\n");
		printf("Enter 7 to delete from last\n");
		printf("Enter 8 to display data\n");
		scanf("%d",&ch);

		switch(ch){
			case 1:
				printf("Enter data to be filled\n");
				scanf("%d",&data);
				insert(data);
				break;
			case 2:
				printf("Enter data to get successor ");
				scanf("%d",&data);
				successor(data);
				break;
			case 3:
				printf("Enter data to check predecessor ");
				scanf("%d",&data);
				predecessor(data);
				break;
			case 4:
				firstLocation();
				break;
			case 5:
				lastLocation();
				break;
			case 6:
				delFirst();
				break;
			case 7:
				delLast();
				break;
			case 8:
				display();
				break;
			default:
				printf("Invalid choice\n");
		}
		printf("press 0 to continue\n");
		scanf("%d",&ch);
	}while( ch==0 );

  getch();
 return 0;
}

//  function to insert in LL 
void insert(int data){
	if(start == NULL){
		start = (struct Node*) malloc(sizeof(struct Node));
		start->data = data;
		start->link = NULL;
	}
	else{
		p = start;
		while(p->link != NULL)
			p = p->link;

		temp = (struct Node*) malloc(sizeof(struct Node));
		temp->data = data;
		temp->link = NULL;
		p->link = temp;
	}
}
// function to print successor 
void successor(int data){
	if(start == NULL || start->link == NULL)  //for null and one node only
			printf("No successor\n");

	else{
		p = start;
		while(p->link != NULL){
			if(p->data == data){
				printf("the value of successor is %d\n",p->link->data);
				printf("the location of successor is %p\n",p->link);
				break;
			}
			p = p->link;
		}
		//for last node
		if((p->data == data && p->link==NULL) || p->link == NULL)
			printf("No successor, Last node\n");
	}
}

// function to get predecessor 
void predecessor(int data){
	if(start == NULL || start->link == NULL)
		printf("No predecessor\n");
	else{
		struct Node *q = start; //extra ptr for previous node
		p = start->link;

		if(q->data == data && q->link != NULL) //if firstnode == data
			printf("No successor, first node\n");

		while(p != NULL){
			if(p->data == data){
				printf("The value of predecessor is %d\n",q->data);
				printf("The location of predecessor is %p\n",q);
				break;
			}
			q = q->link;
			p= p->link;
		}
	}
}

// return location of first element 
void firstLocation(){
	if(start == NULL)
		printf("No list present\n");
	else
		printf("address is %p\n",start);
}
// return the location of the last element 
void lastLocation(){
	if(start == NULL)
		printf("No list present\n");
	else{
		p= start;
		while(p->link != NULL)
			p=p->link;

		printf("last element is %d\n",p->data);
		printf("Last element location is %p\n",p);
	}
}
// delete element from first 
void delFirst(){
	if(start == NULL)
		printf("No list present\n");
	else if(start->link == NULL){
		free(start);
		printf("%d is deleted\n",start->data);  //is this work
		start = NULL;
	}
	else{
			p=start;
			start = start->link;
			temp = p;
			temp->link = NULL;
			printf("%d is deleted from start\n",temp->data);
			free(temp);
	}
}
// delete element from last 
void delLast(){
	if(start == NULL)
		printf("No list present\n");
	else if(start->link == NULL){
		free(start);
		printf("%d is deleted\n",start->data);
		start = NULL;
	}
	else{
		p = start;
		while(p->link->link != NULL)
			p = p->link;

		temp = p->link;
		free(temp);
		printf("%d is deleted from end\n",temp->data);
		p->link = NULL;
	}
}

//  function to display LL data 
void display(){
	p= start;

	if(start == NULL)
		printf("No list present\n");

	while(p!=NULL){
		printf("%d ",p->data);
		p = p->link;
	}
}

//    1_feb_2022 