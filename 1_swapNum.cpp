// Q1. Write a program to swap two numbers using pointers.

#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a,b;

    cout<<"Enter any two numbers "<<endl;
    cin>>a>>b;

    cout<<"Value before swap a= "<<a<<" b= "<<b<<endl;
    swap(&a, &b);

    cout<<"value after swap a = "<<a <<" b= "<<b<<endl;

    return 0;
}