#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*first=NULL;

// function to create a node
void create(int A[],int n){
    int i;
    struct Node *t,*last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for(i=1; i<n; i++){
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    } 
}

// function to display node data
void Display(struct Node *p){
    while(p != NULL){
        printf("%d ",p->data);
        p = p->next;
    }
}
// Recursive display function
void RDisplay(struct Node *p){
    if(p != NULL){
        RDisplay(p->next);
        printf("%d ",p->data);
    }
}
// **********  count Node function ***************
// function to count node present
int count(struct Node *p){
    int l=0;
    while(p){
        l++;
        p = p->next;
    }
    return l;
}

// recursive function to count node
int Rcount(struct Node *p){
    if(p != NULL){
        return Rcount(p->next)+1;
    }
    else{
        return 0;
    }
}

// ********** show sum of the Node data ****************
int sum(struct Node *p){
    int s=0;
    while(p != NULL){
        s = s + p->data;
        p = p->next;
    }
    return s;
}

// recursive function to print sum of node
int Rsum(struct Node *p){
    if(p != NULL)
        return 0;
    else{
        return Rsum(p->next) + p->data;
    }
} 

// ************** find maximum node data ***************
int Max(struct Node *p){
    int max = INT_MIN;

    while(p){
        if(p->data = max){
            max = p->data;
        }
        p = p->next;
    }
    return max;
}

//Recursive function to find maximum node data
int RMax(struct Node *p){
    int x=0;

    if(p==0){
        return INT_MIN;
    }

    x = RMax(p->next);
    if(x > p->data){
        return x;
    }
    else{
        return p->data;
    }
}

// ******************** function for linear search ************
struct Node * LSearch(struct Node *p, int key){
    while( p != NULL){
        if(key == p->data)
            return p;

        p = p->next;
    }
    return NULL;
}

// ************ inserting in linked list **************
void Insert(struct Node *p, int index, int x){
    struct Node *t;
    if(index < 0 || index > count(p))
        return;

    t= (struct Node *) malloc(sizeof(struct Node));
    t->data = x;

    if(index == 0){ // code if have to inserted before first node
        t->next = first;
        first = t;
    }
    else{
        // to insert node anywhere after first node
        for(int i=0; i< index -1; i++){
            p = p->next;
        }

        t->next = p->next;
        p->next = t;
    }
}

// ******* insert in sorted linked list ***************
void SortedInsert(struct Node *p, int x){
    struct Node *t,*q = NULL;

    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;
    t->next = NULL;

    if(first == NULL) // if no node is there
        first = t;

    else{
        while(p && p->data < x){ // till x is less than present node
            q = p;
            p = p->next;
        }
        if(p == first){ // if this is first node
            t->next = first;
            first = t;
        }
        else{
            t->next = q->next;
            q->next = t;
        }
     }   
} 



// *************************************************
// *************** Main function form here ********************
int main(){

    int A[] = {3,5,7,10,25,8,32,2};
    create(A,8);

    // ****for lsearch function **
    // struct Node *temp;
    // temp = LSearch(first,25);
    // if(temp)
    //     printf("Key is Found %d \n",temp->data);
    // else{
    //     printf("Key is not found\n");
    // }    

    // *** to insrt node anywhere **
    // Insert(first,0,10);
    // Insert(first,4,30);
    // Display(first);

    //*** insert in sorted linked list **
    // int b[] = {10,20,30,40,50};
    // create(b,5);
    SortedInsert(first,35);
     // inserted after 30

    SortedInsert(first,55); //insert even there is no linked list present
    Display(first);
    printf("\n\n");


    return 0;
}