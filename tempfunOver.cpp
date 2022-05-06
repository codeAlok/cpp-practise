//template practised with constructors
#include<iostream>
using namespace std;

template <class T>
class Alok{
    public:
    T data;

    Alok(T a){
        data = a;
    }

    void display();
};

template <class T>
void Alok<T>::display(){
    cout<<data;
}

// which of the below will called normally
void func(int a){
    cout<<"I am first func()"<<endl;
}

template <class T>
void func(T a){
    cout<<"I am templazied func()"<<endl;
}

template <class T>
void func1(T a){
    cout<<"I am templazied func1() "<<endl;
}


int main(){
    // Alok<int> h(5);
    // cout<<h.data;

    func(4); // exact match takes the highest priority (normal one called)
    func1(6);

    return 0;
}