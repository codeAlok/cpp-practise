// templates class
#include<iostream>
using namespace std;

template<class T1=int, class T2=float>
class Alok{
    public:
        T1 a;
        T2 b;

        Alok(T1 x, T2 y){
            a = x;
            b= y;
        }

        void display(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
        }
};

int main(){

    Alok<> h(4, 6.4); // deafult will work
    h.display();
    Alok<float, char> g('a', 'b');
    g.display();


    return 0;
}