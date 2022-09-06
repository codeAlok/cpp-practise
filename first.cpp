#include<iostream>
// #include "hero.cpp"
using namespace std;

class hero{
    private:
    int health;

    public:
    int level;

    hero(){
        // default constructor
        cout<<"default constructor called"<<endl;
    }
    // parameterised constructor
    hero(int health,int level){
        cout<<"this is "<< this<<endl;
        this->health = health;  // this is pointer to object always
        this->level = level;  // this is pointer to object always
    }

    // copy constructor
    hero(hero &temp){  
        //passed by value otherwise this keep moving in loop temp to copy constructor and copy constructor to temp
        cout<<"copy constructor called "<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    int getHealth(){
        return health;
    }
    void setHealth(int h){
        health = h;
    }
    int getLevel(){
        return level;
    }
    void setLevel(int l){
        level = l;
    }
};

int main(){
/*    
    //static allocation
    // hero alok;

    // cout<<"Ramesh health is "<<alok.getHealth()<<endl;
    // // use setter
    // alok.level = 10;

    // // cout<<"health is: "<<alok.health<<endl;
    // cout<<"level is: "<<alok.level<<endl;

    // cout<<"size of alok is "<<sizeof(alok);// read padding and greedy alignment

    //***************** *******
    //dynamic allocatin of object
    hero *a = new hero;

    a->setHealth(90);  // access value
    a->setLevel(10);

    cout<<"level is "<< (*a).level <<endl;
    cout<<"health is "<< (*a).getHealth()<<endl; //or
    cout<<"health is "<< a->getHealth()<<endl;

*/
    // hero alok(10);
    // cout<<"Address of alok "<< &alok <<endl;
    // alok.getHealth();
//*******************
//copy constructor

    hero s(20,30);
    cout<<s.getHealth()<<" "<<s.level<<endl;

    hero r(s); // copying constructor
    cout<<r.getHealth()<<" "<<r.level<<endl;
    
    return 0;
}