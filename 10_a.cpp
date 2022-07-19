// Q 10. program to find out sum of follwing series.
// (a) s= 1 + 2!/2 + 3!/3 + ........ + n!/n
#include<iostream>
// #include<conio.h>
using namespace std;
// ******* series class *******
class Series{
 int i, n, sum, fact, j;

 public:
 void input(){
 cout<<"Enter the value of n: "<<endl;
 cin>>n;
 }

 void process(){
 sum = 1;
 fact = 1;

 for(i=1; i<n; i++){
 fact = fact * i;
 for(j=1; j<=1; j++){
 sum = sum + fact /i;
 }
 }
 }

 void display(){
 cout<<sum;
 }
};
int main(){
 Series obj;
//  clrscr();

 obj.input();
 obj.process();
 obj.display();

//  getch();

}
//output