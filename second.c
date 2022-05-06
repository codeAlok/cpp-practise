// question done from hackerrank
#include<stdio.h>
#include<conio.h>

void main(){
    int a,b,c,d,e,sum;
    float avg;

    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    sum = a+ b+c+d+e;
    avg = (a+b+c+d+e)/5.0;
    printf("%d %d %d %d %d\n",a,b,c,d,e);
    printf("%d %d", sum,avg);

    getch();
}