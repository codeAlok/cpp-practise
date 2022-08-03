// Q7. WAP to perform linear search on array
// time complexity => o(n)

#include<iostream>
using namespace std;

// ***** Linear search function ******
void linearSearch(int arr[], int size, int num)
{
    int i, flag =0;

    for(i=0; i<size; i++)
    {
        if(arr[i] == num)
        {
            flag = 1;
            break;
        }
    } 

    if(flag > 0)
        cout<<"Element found"<<endl;
    else
        cout<<"Element not found"<<endl;
        
}

int main()
{
    int num;
    int arr[10] = {11, 8, 10, 4, 6, 4, 7, 5, 3, 9};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"Enter the number you want to search"<<endl;
    cin>>num;

    linearSearch(arr, size, num); // calling linear search function 
    
    return 0;
}