// Q3. WAP to find the factorial of a number using (b)iteration

#include<iostream>
using namespace std;

int main(){
    int num, fact=1;

    cout<<"Enter the number for factorial "<<endl;
    cin>>num;

    while(num >= 1){
        fact = fact * num;

        num--;
    }

    cout<<"The factorial of number is "<<fact<<endl;

    return 0;
}