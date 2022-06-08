// WAP to print all armstrong number from 100 to 1000.


#include<iostream>
using namespace std;

int main(){
        
    for(int num=100; num<=1000; num++){
        int rem, sum=0;
        int temp = num;

        while(num != 0){
            rem = num % 10;
            sum = sum + (rem * rem * rem);
            num = num / 10;
        }

        if(sum == temp){
            cout<<sum<<" ";
        }

        num = temp;  // because after calc num become 0 , so again initialize
    }

    return 0;
}



