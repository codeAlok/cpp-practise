// Q10. WAP for matrix multiplication

#include<iostream>
using namespace std;

// **** Function to display matrix *****
void displayMatrix(int arr[3][3], int size)
{
    int i,j;

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

// ****  MultiplyMatrix function *****
void multiplyMatrix(int arr1[3][3], int arr2[3][3], int size)
{
    int mul[3][3];
    int i, j, k;

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            mul[i][j] = 0; // to replace garbage value
            for(k=0; k<3; k++)
            {
                mul[i][j] = arr1[i][k] * arr2[k][j] + mul[i][j];  // formula
            }
        }
    }

    cout<<"Multiplied matrix "<<endl;
    displayMatrix(mul, size); // to display multiplied matrix
}

// ***** Main function *****
int main()
{
    int arr1[3][3], arr2[3][3];
    int i, j;

    cout<<"Enter 9 elements in matrix A"<<endl;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cin>>arr1[i][j];
        }
    }

    cout<<"\n Enter 9 elements for matrix B"<<endl;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cin>>arr2[i][j];
        }
    }

    displayMatrix(arr1, 3);
    displayMatrix(arr2, 3);

    multiplyMatrix(arr1, arr2, 3);

    return 0;
}