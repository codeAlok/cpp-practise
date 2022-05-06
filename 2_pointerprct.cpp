#include<iostream>
using namespace std;

int main(){
    // int a=5;
    // int *p = NULL;
    // cout<<"address of a "<< &a<<endl;
    // cout<<"address of p "<< &p <<endl;
    // cout<<"address of p "<< p <<endl;
    // cout<<"address of p "<< p <<endl;

    
    // p++;
    // cout<<"after increament "<<endl;
    // cout<<"address of a "<< &a<<endl;
    // cout<<"address of p "<< &p <<endl;
    // cout<<"address of p "<< p <<endl;
    


    int *q;
    cout<<"The value of *q is "<< *q<<endl; // why after this nothing is printing
    cout<<"The value of q is "<<q<<endl;
    cout<<"Hello everyone"<<endl;

    int *p;
    cout<<"THe value of *p is "<<*p<<endl;
    cout<<"The value of q is "<<p<<endl;
    cout<<"Hello everyone"<<endl;
    // int n = NULL;
    // cout<<"value of n is "<<n;

    int a=5;
    cout<<&a;

    return 0;
}
