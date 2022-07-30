// Q2. WAP in c/c++ for array implementation of QUEUE with all basic function (push, pop, search, count, display)


// solve -> after deleting element space decreases ???

#include<iostream>
using namespace std;


// **** QUEUE structure creating ****
struct QUEUE
{
    int arr[5];
    int front, rear;
}Q;


// **** Declaration of all function *****
void push(int num);
void pop();
void search(int num);
void count();
void display();


int main()
{
    int check, num;

    Q.front = 0;
    Q.rear = -1;

    do
    {
        cout<<"Enter your choice"<<endl;
        cout<<"Press 1 to Insert element"<<endl;
        cout<<"Press 2 to delete element"<<endl;
        cout<<"Press 3 to search element"<<endl;
        cout<<"Press 4 to count no. of element"<<endl;
        cout<<"Press 5 to display all element"<<endl;

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

// *** Insert function ****
void push(int num)
{
    if(Q.rear == 4)
        cout<<"OVERFLOW"<<endl;
    else
    {
        Q.rear++;
        Q.arr[Q.rear] = num;

        cout<<"Element Inserted"<<endl;
    }
}

// **** Delete function ****
void pop()
{
    if(Q.rear == -1)
        cout<<"UNDERFLOW"<<endl;
    else
    {
        Q.front++;
        if(Q.front > Q.rear)
        {
            Q.front = 0;
            Q.rear = -1;
        }

        cout<<"Element is deleted"<<endl;
    }
}

// **** Search function ****
void search(int num)
{
    int i;
    int flag = 0;

    if(Q.rear == -1)
        cout<<"Queue is empty"<<endl;
    else
    {
        for(i=Q.front; i<=Q.rear; i++)
        {
            if(Q.arr[i] == num)
            {
                flag++;
            }
        }

        if(flag != 0)
            cout<<"Element found "<<flag <<" times"<<endl;
        else
            cout<<"Element not found"<<endl;

    }
}

// **** Count function ****
void count()
{
    int c;

    c = (Q.rear - Q.front) + 1;

    cout<<"Total no. of elements is "<<c<<endl;
}

// **** Display function ****
void display()
{
    int i;

    if(Q.rear == -1)
        cout<<"Queue is Empty"<<endl;
    else
    {
        for(i=Q.front; i<=Q.rear; i++)
        {
            cout<<Q.arr[i]<<" ";
        }
    }
}


// **** OUTPUT *****

/*
Enter your choice
Press 1 to Insert element
Press 2 to delete element
Press 3 to search element
Press 4 to count no. of element
Press 5 to display all element
1
Enter the value to insert
10
Element Inserted
Press 0 to continue
Press any other key to exit
0
Enter your choice
Press 1 to Insert element
Press 2 to delete element
Press 3 to search element
Press 4 to count no. of element
Press 5 to display all element
1
Enter the value to insert
20
Element Inserted
Press 0 to continue
Press any other key to exit
0
Enter your choice
Press 1 to Insert element
Press 2 to delete element
Press 3 to search element
Press 4 to count no. of element
Press 5 to display all element
1
Enter the value to insert
30
Element Inserted
Press 0 to continue
Press any other key to exit
0
Enter your choice
Press 1 to Insert element
Press 2 to delete element
Press 3 to search element
Press 4 to count no. of element
Press 5 to display all element
5
10 20 30 Press 0 to continue
Press any other key to exit
0
Enter your choice
Press 1 to Insert element
Press 2 to delete element
Press 3 to search element
Press 4 to count no. of element
Press 5 to display all element
2
Element is deleted
Press 0 to continue
Press any other key to exit
0
Enter your choice
Press 1 to Insert element
Press 2 to delete element
Press 3 to search element
Press 4 to count no. of element
Press 5 to display all element
5
20 30 Press 0 to continue
Press any other key to exit
0
Enter your choice
Press 1 to Insert element
Press 2 to delete element
Press 3 to search element
Press 4 to count no. of element
Press 5 to display all element
1
Enter the value to insert
20
Element Inserted
Press 0 to continue
Press any other key to exit
0
Enter your choice
Press 1 to Insert element
Press 2 to delete element
Press 3 to search element
Press 4 to count no. of element
Press 5 to display all element
5 
20 30 20 Press 0 to continue
Press any other key to exit
0
Enter your choice
Press 1 to Insert element
Press 2 to delete element
Press 3 to search element
Press 4 to count no. of element
Press 5 to display all element
1
Enter the value to insert
30
Element Inserted
Press 0 to continue
Press any other key to exit
0
Enter your choice
Press 1 to Insert element
Press 2 to delete element
Press 3 to search element
Press 4 to count no. of element
Press 5 to display all element
5
20 30 20 30 Press 0 to continue
Press any other key to exit

*/
