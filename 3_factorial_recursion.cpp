// WAP to find out factorial of a number by using (a) recursion

#include<iostream>
using namespace std;

int factorial(int num){
    if(num == 1 || num == 0){    // base case to end recursive call
        return 1;
    }
    
    return num * factorial(num -1);  // recursive call
}

int main(){
    int num;

    cout<<"Enter number to find factorial "<<endl;
    cin>>num;

    cout<<"The factorial of number is "<<factorial(num); //passing value + print

    return 0;
}