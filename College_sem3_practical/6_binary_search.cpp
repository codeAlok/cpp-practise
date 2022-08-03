//Q6. Write the programme for binary search implementation
// time complexity => o(logn)

#include<iostream>
using namespace std;

// **** Binary search function *****
void binarySearch(int arr[], int size, int num)
{
    int flag = 0;
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;   // middle of selected part

    while(start <= end)
    {
        if(arr[mid] == num)
        {
            flag++;
            break;  // increase flag and return to exit loop
        }

        if(num > arr[mid])
        {
            start = mid + 1;  // shift start to next of mid index
        }
        else{
            end = mid -1;  // shift end ,before the mid index
        }

        mid = start + (end - start)/2;  // recalculate mid index
    }

    if(flag > 0)
        cout<<"Element found"<<endl;
    else
        cout<<"Element not found"<<endl;
}


int main()
{
    int num;
    int arr[10] = {13, 18, 22, 36, 40, 43, 53, 65, 71, 89};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"Enter the number to search "<<endl;
    cin>>num;

    binarySearch(arr, size, num); // calling binarySearch function

    return 0;
}