// Q9. Wap to enter any number and find out the following by creating user defined name.
// (a) armstrong
// (b) fibonacci
// (c) palindrome
// (d) reverse of the number


#include<iostream>
using namespace std;

void armstrong(int num){
    int rem,temp, sum=0;

    temp = num;
    while(num > 0){
        rem = num % 10;
        sum = sum+ rem * rem * rem;  // ex: 371
        num = num /10;
    } 

    if(temp == sum){

    cout<<"The  number is armstrong"<<endl;
    }
    else{
        cout<<"The number is not armstrong"<<endl;
    }
}

// fibonacci series function
void fibonacci(int num) {
    int t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Fibonacci Series: ";
    for (int i = 1; i <= num; ++i) {
        // Prints the first two terms.
        if(i == 1) {
            cout << t1 << ", ";
            continue;
        }
        if(i == 2) {
            cout << t2 << ", ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;  
        cout << nextTerm << ", ";
    }
    cout<<endl;
}

// Palindrome function
void palindrome(int num){
    int temp, digit,rev=0;

    temp = num;
    while (num > 0){
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } 

     cout << " The reverse of the number is: " << rev << endl;

     if (temp == rev)
         cout << " The number is a palindrome. \n";
     else
         cout << " The number is not a palindrome. \n";

}

// function for reverse a number
void reverseNum(int num){

    int rem, reverseNum=0;

    while(num != 0) {

    rem = num % 10;
    reverseNum = reverseNum * 10 + rem;
    num = num / 10;
  }

  cout << "Reversed Number = " << reverseNum<<endl;
}

// Main function
int main(){
    int num;
    int check =0;

    do{
        cout<<"Enter any number"<<endl;
        cin>>num;

        cout<<"Enter 1 to check armstrong number "<<endl;
        cout<<"Enter 2 to find fibonacci series "<<endl;
        cout<<"Enter 3 to check palindrome number "<<endl;
        cout<<"Enter 4 to check reverse the number "<<endl;

        cin>>check;

        switch(check){
            case 1:
                armstrong(num);
                break;
            case 2:
                fibonacci(num);
                break;
            case 3:
                palindrome(num);
                break;
            case 4:
                reverseNum(num);
                break;
            default:
                cout<<"Invalid choice"<<endl;
        }

        cout<<"Enter 0 to continue"<<endl;
        cin>>check;

    }while(check==0);

    return 0;
}