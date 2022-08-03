//Q8. Write the program of Bubble sort Algorithm.
// Time complexity = 0(n^2)


#include<iostream>
using namespace std;

// ***** Bubble sort function *******
void bubbleSort(int arr[], int size)
{
    int flag, i, j, temp;

    for(i=0; i<size-1; i++)
    {
        flag = 0;  
        for(j=0; j < size-1-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                // swapping both
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

                flag = 1;  // flag initialized to 1
            }
        }

        // break if no swaps happen( already sorted)
        if(flag == 0)
            break;
    }
}

// ***** Main Function *****
int main()
{
    int arr[10] = {5, 8, 10, 2, 4, 4, 7, 1, 3, 9};
    int size = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr, size); // calling bubbleSort function

    cout<<"Array after sorting "<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<arr[i] <<" ";
    }
    cout<<endl;

    return 0;
}