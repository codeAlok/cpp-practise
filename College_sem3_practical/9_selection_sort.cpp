//Q9. Write the program for Selection sort algorithm
// time complexity = o(n^2)


#include<iostream>
using namespace std;

// **** Selection sort *****
void selectionSort(int arr[], int size)
{
    // taking i, j, k as 3 pointer to perform task and temp for swap
    int i, j, k, temp;

    for(i=0; i<size-1; i++)
    {
        for(j=k=i; j<size; j++)
        {
            if(arr[j] < arr[k])
                k = j;
        }

        // swapping element where k point to ith element
        temp = arr[i];
        arr[i] = arr[k];
        arr[k] = temp;
    }
}

// **** Main function *****
int main()
{
    int i;
    int arr[10] = {11, 8, 10, 2, 6, 4, 7, 5, 3, 9};
    int size = sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr, size);  // calling selectionSort function

    cout<<"Array after selection sort "<<endl;
    for(i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}