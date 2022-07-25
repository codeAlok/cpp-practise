#include<iostream>
using namespace std;

int circleArea(int radius){
    int area;

    area = 3.14 * radius * radius;   // area = pi(3.14) * r * r;

    return area;   // returning value of area to main
}

int main(){
    int radius;

    cout<<"Enter the radius for circle"<<endl;
    cin>>radius;

    cout<<"The area of circle is "<< circleArea(radius);

    return 0;
}