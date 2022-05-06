//Linked list with various fuction 
//code done at college time

#include<stdio.h>
#include<conio.h>
// #include<alloc.h>
#include<stdlib.h>

//Node structure
					     //Bheem's Code 31Jan22
struct Node
{
  int data;
  struct Node* link;

}*start,*p,*temp;

//Function Declaration
void insert(int x);
void delLast();
void delFirst();
int search(int x);
int count();
void display();
void predAdrss(int x);
void succAdrss(int x);
void firstAdrss();
void lastAdrss();
void delFirstAndLast();

//Main
int main()
{
  int ch,n;

  do
  {
    //Choices
    printf("\nEnter your choice: ");
    printf("\nPress 1 to insert ");
    printf("\nPress 2 to delete from last");
    printf("\nPress 3 to search");
    printf("\nPress 4 to count");
    printf("\nPress 5 to display");
    printf("\nPress 6 to delete from first");
    printf("\nPress 7 to element successor location");
    printf("\nPress 8 to element predecessor location");
    printf("\nPress 9 to first elemnt location");
    printf("\nPress 10 to last element location");
    printf("\nPress 11 to delete first and last node together\n");
    scanf("%d",&ch);

    switch(ch)
    {
      //Insertion Choice
      case 1: printf("Enter the value to insert\n");
	      scanf("%d",&n);
	      insert(n);
	      break;

      //Deletion from last
      case 2: delLast();
	      break;

      //Element search operation
      case 3: printf("Enter the vlaue to be search\n");
	      scanf("%d",&n);
	      ch = search(n);

	      if(ch==-1)
	       printf("\nNo list is present..\n");

	      else if(ch == 0)
	       printf("\nElement not found\n");

	      else
	       printf("\nElement present at %d position\n",ch);
	      break;

      //Counting of elements in queue
      case 4: ch = count();
	      printf("\nNumber of elements are %d\n", ch);
	      break;

      //Display of all elements in queue
      case 5: display();
	      break;

      //Deletion from first
      case 6: delFirst();
	      break;

      //To check element Successor location
      case 7: printf("\nEnter the element :\n");
	      scanf("%d",&n);
	      succAdrss(n);
	      break;

      //To check element Predecessor location
      case 8: printf("\nEnter the element :\n");
	      scanf("%d",&n);
	      predAdrss(n);
	      break;

      //To check location of first element
      case 9: firstAdrss();
	      break;

      //To check location of last element
      case 10: lastAdrss();
	       break;

      //To delete from first and last together
      case 11: delFirstAndLast();
	       break;

      default: printf("\nInvalid choice");
    }
    printf("\nPress 0 to continue...");
    scanf("%d",&ch);

  }while(ch==0);

  return 0;
}
 //Insert Fuction
 void insert(int x)
 {
    if(start==NULL)
    {
      start = (struct Node*)malloc(sizeof(struct Node));
      start->data = x;
      start->link = NULL;
    }
    else
    {
      p = start;

      while(p->link!=NULL)
	p = p->link;
      temp = (struct Node*)malloc(sizeof(struct Node));
      temp->data = x;
      temp->link = NULL;
      p->link = temp;
    }
    printf("Element inserted...");
 }
 //Delete from last function
 void delLast()
 {
   if(start==NULL)
     printf("No list is present!!!");

   else if(start->link==NULL)
   {
      free(start);
      start =NULL;
      printf("\nNode is delted from last...\n");
   }

   else
   {
     p = start;

     while(p->link->link!=NULL)
     {
       p = p->link;
     }
     temp = p->link;
     free(temp);
     p->link = NULL;
     printf("\nNode is delted from last...\n");
   }
 }
 //Delete from first function
 void delFirst()
 {
   if(start==NULL)
     printf("No list is present!!!");

   else if(start->link==NULL)
   {
     free(start);
     start = NULL;
     printf("\nNode is deleted from first\n");
   }
   else
   {
     temp = start;
     start = start->link;
     free(temp);
     printf("\nNode is deleted from first\n");
   }
 }
 //Search function
 int search(int x)
 {
   int flag = 0 ;
   int pos = 0;

   if(start==NULL)
    {
       return -1;
    }
   else
   {
     p = start;

     while(p!=NULL)
     {
       pos++;

       if(p->data == x)
       {
	flag++;
	break;
       }
       p=p->link;
     }

     if(flag==0)
       return 0;
     else
       return pos;
   }
 }
 //Count function
 int count()
 {
  int c = 0;

  if(start==NULL)
    return 0;

  else
  {
    p = start;

    while(p!=NULL)
    {
      c++;
      p = p->link;
    }
    return c;
  }
 }
 //Display function
 void display()
 {
   if(start==NULL)
    printf("No list present");

   else
   {
     p = start;

     printf("Elements are : ");
     while(p!=NULL)
     {
       printf(" %d\t",p->data);
       p = p->link;
     }
   }
 }
 //Successor location function
 void succAdrss(int x)
 {
   int c;
   int pos;

   c = count();

   if(c==0)
     printf("No list present");

   else if(c == 1)
     printf("\nOnly one element in list, successor loaction not possible\n");

   else
   {
     pos = search(x);

     if(pos == c)
      printf("\nEntered element is Last element in list, successor loaction not possible\n");

     else if(pos ==0)
      printf("\nEntered element is not in the list\n");

     else
     {
       p = start;

       while(p->data!=x)
       {
	        p = p->link;
       }
       printf("\nLocation of successor is %p" , p->link);
       printf("\nElement at successor is %d",p->link->data);
     }
   }
 }
 //Predesessor location function
 void predAdrss(int x)
 {
   int c;
   int pos;

   c = count();

   if(c==0)
     printf("No list present");

   else if(c == 1)
     printf("\nOnly one element in list, predecessor loaction not possible\n");

   else
   {
     pos = search(x);

     if(pos==0)
       printf("\nElement not present in the list\n");

     else if(pos == 1)
      printf("\nEntered element is first element in list, predecessor loaction not possible\n");

     else
     {
       p = start;

       while(p->link->data!=x)
	 p = p->link;

       printf("\nLocation of predecessor of given element is %p\n",p);
       printf("\nElemet at that location is %d\n",p->data);
     }
   }
 }
 //First element location function
 void firstAdrss()
 {
   if(start==NULL)
     printf("\nNo list present\n");

   else
   {
     printf("\nLocation of 1st element is %p\n",start);
     printf("\nElement at that location is %d\n",start->data);
   }
 }
 //Last element location function
 void lastAdrss()
 {
   if(start==NULL)
     printf("\nNo list present\n");

   else
   {
    p = start;

    while(p->link!=NULL)
      p = p->link;

    printf("\nLocation of Last element is %p\n",p);
    printf("\nElement at that location is %d\n",p->data);
   }
 }
 //Delete from first and last function
 void delFirstAndLast()
 {
   delFirst();
   delLast();
 }