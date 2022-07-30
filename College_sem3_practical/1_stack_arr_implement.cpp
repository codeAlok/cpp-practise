//Q1. WAP in c/c++ for array implementation of STACK with all basic function (push, pop, search, count, display)

#include<iostream>
using namespace std;


// ***** Declartion of all function *****
void push(int num);
void pop();
void search(int num);
void count();
void display();

//*****  STACK structure created *****
struct stack
{
    int arr[5];
    int top;
}s;

// ****** Main function ******
int main(){
    int check, num;

    s.top = -1;  // initially set top of stack to -1 (empty stack)

    do{
        cout<<"Press 1 to insert"<<endl;
        cout<<"Press 2 to delete"<<endl;
        cout<<"Press 3 to search"<<endl;
        cout<<"Press 4 to count"<<endl;
        cout<<"Press 5 to display"<<endl;

        cin>>check;

        switch(check){
            case 1:
                cout<<"Enter the value to insert"<<endl;
                cin>>num;
                push(num);  // passing value to insert
                break;
            
            case 2:
                pop();
                break;
            
            case 3:
                cout<<"Enter the value to search"<<endl;
                cin>>num;
                search(num); // passing value to check availability
                break;
            
            case 4:
                count();
                break;
            
            case 5:
                display();
                break;
            
            default:
                cout<<"Invalid choice";
        }

        cout<<"Press 0 to continue"<<endl;
        cout<<"Press any other key to exit"<<endl;
        cin>>check;

    }while(check == 0);
    
    return 0;
}

// **** Insert function *****
void push(int x)
{
    if(s.top == 4)
        cout<<"OVERFLOWW"<<endl;
    else
    {
        s.top++;
        s.arr[s.top] = x;
    }
}

// **** Delete function *****
void pop()
{
    if(s.top == -1)
        cout<<"UNDERFLOW"<<endl;
    else
    {
        s.top--;
    }
}

// **** Search function ****
void search(int num)
{
    int i, count = 0;

    if(s.top == -1)
        cout<<"Stack is empty"<<endl;
    else
    {
        for(i=s.top; i>= 0; i--)
        {
            if(s.arr[i] == num)
            {
                count++;
            }
        }

        if(count == 0)
            cout<<"\n Element not found"<<endl;
        else    
            cout<<"Element found "<<count <<" times"<<endl;
    }
}

//**** Count element in stack ****
void count()
{
    cout<<"Total no. of elements is "<<s.top+1 <<" in the stack"<<endl;
}

// **** Display all elements of stack ****
void display()
{
    int i;

    if(s.top == -1)
        cout<<"Stack is empty";
    else
    {
        for(i=s.top; i>=0; i--)
        {
            cout<<s.arr[i] << " ";
        }
    }
}

// ***** OUTPUT ******

/*
Press 1 to insert
Press 2 to delete
Press 3 to search
Press 4 to count
Press 5 to display
1
Enter the value to insert
10
Press 0 to continue
Press any other key to exit
0
Press 1 to insert
Press 2 to delete
Press 3 to search
Press 4 to count
Press 5 to display
1
Enter the value to insert
20
Press 0 to continue
Press any other key to exit
0
Press 1 to insert
Press 2 to delete
Press 3 to search
Press 4 to count
Press 5 to display
5
20 10 Press 0 to continue
Press any other key to exit
0
Press 1 to insert
Press 2 to delete
Press 3 to search
Press 4 to count
Press 5 to display
2
Press 0 to continue
Press any other key to exit
0
Press 1 to insert
Press 2 to delete
Press 3 to search
Press 4 to count
Press 5 to display
5
10 Press 0 to continue
Press any other key to exit
0
Press 1 to insert
Press 2 to delete
Press 3 to search
Press 4 to count
Press 5 to display
1
Enter the value to insert
30
Press 0 to continue
Press any other key to exit
0
Press 1 to insert
Press 2 to delete
Press 3 to search
Press 4 to count
Press 5 to display
1
Enter the value to insert
20
Press 0 to continue
Press any other key to exit
0
Press 1 to insert
Press 2 to delete
Press 3 to search
Press 4 to count
Press 5 to display
1 
Enter the value to insert
10
Press 0 to continue
Press any other key to exit
0
Press 1 to insert
Press 2 to delete
Press 3 to search
Press 4 to count
Press 5 to display
1
Enter the value to insert
10
Press 0 to continue
Press any other key to exit
0
Press 1 to insert
Press 2 to delete
Press 3 to search
Press 4 to count
Press 5 to display
5
10 10 20 30 10 Press 0 to continue
Press any other key to exit
0
Press 1 to insert
Press 2 to delete
Press 3 to search
Press 4 to count
Press 5 to display
4
Total no. of elements is 5 in the stack
Press 0 to continue
Press any other key to exit
0
Press 1 to insert
Press 2 to delete
Press 3 to search
Press 4 to count
Press 5 to display
3 
Enter the value to search
10
Element found 3 times
Press 0 to continue
Press any other key to exit
0
Press 1 to insert
Press 2 to delete
Press 3 to search
Press 4 to count
Press 5 to display
2
Press 0 to continue
Press any other key to exit
0
Press 1 to insert
Press 2 to delete
Press 3 to search
Press 4 to count
Press 5 to display
5
10 20 30 10 Press 0 to continue
Press any other key to exit

*/