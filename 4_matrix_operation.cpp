// Q4. WAP  a menu driven program to perform following matrix operation
// (a) sum of two matrix
// (b) Diffrence of two matrix
// (c) Product
// (d) transpose of matrix


#include<iostream>
using namespace std;


// function to add two matrix
void sumMatrix(int arr1[3][3], int arr2[3][3], int n){
    int i, j, sum[n][n];

    for(i=0; i< 3; i++){
        for(j=0; j<3; j++){
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    cout<<"Printing sum of both matrix"<<endl;
    for(i=0; i< 3; i++){
        for(j=0; j<3; j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
}

// function to get diffrence of two matrix
void diffrenceMatrix(int arr1[3][3], int arr2[3][3], int n){
    int i, j, diffrence[n][n];

    for(i=0; i< 3; i++){
        for(j=0; j<3; j++){
            diffrence[i][j] = arr1[i][j] - arr2[i][j];
        }
    }

    cout<<"Printing diffrence of both matrix"<<endl;
    for(i=0; i< 3; i++){
        for(j=0; j<3; j++){
            cout<<diffrence[i][j]<<" ";
        }
        cout<<endl;
    }
}

// Multiplication of two matrix
void multiplyMatrix(int arr1[3][3], int arr2[3][3], int n){
    int i, j, k, multiply[n][n];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            multiply[i][j] = 0;   // setting vale 0 intialyy to all matrix
 
            for (k = 0; k < n; k++) {
                multiply[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    cout<<"Printing multiply of both matrix"<<endl;
    for(i=0; i< 3; i++){
        for(j=0; j<3; j++){
            cout<<multiply[i][j]<<" ";
        }
        cout<<endl;
    }
}

// Function to transpose matrix 
void transposeMatrix(int arr[3][3], int n){
    int i, j, transpose[n][n];

    for (i = 0; i < n; ++i)
      for (j = 0; j < n; ++j) {
         transpose[j][i] = arr[i][j];
      }

    cout<<"Printing transpose of matrix"<<endl;
    for(i=0; i< n; i++){
        for(j=0; j<n; j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr1[3][3], arr2[3][3];
    int i, j, check = 0;


    cout<<"Enter the value in first matrix"<<endl;
    for(i=0; i< 3; i++){
        for(j=0; j<3; j++){
            cin>>arr1[i][j];
        }
    }

    cout<<"Enter the value in second matrix"<<endl;
    for(i=0; i< 3; i++){
        for(j=0; j<3; j++){
            cin>>arr2[i][j];
        }
    }

    do{
        cout<<"Press 1 to add two marix"<<endl;
        cout<<"Press 2 to diffrence two marix"<<endl;
        cout<<"Press 3 to multiply two marix"<<endl;
        cout<<"Press 4 to transpose two marix"<<endl;
        cin>>check;

        switch(check){
            case 1:
                sumMatrix(arr1, arr2, 3);  // calling sum matrix function
                break;
            case 2:
                diffrenceMatrix(arr1, arr2, 3); // callling diffrence function
                break;
            case 3:
                multiplyMatrix(arr1, arr2, 3); // calling multiply function
                break;
            case 4:
                transposeMatrix(arr1, 3); // calling transpose function
                break;


            default:
                cout<<"Invalid choice"<<endl;
        }

        cout<<"Press 0 to continue"<<endl;
        cin>>check;
    }while(check == 0);


    return 0;
}