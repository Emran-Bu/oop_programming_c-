#include<iostream>
using namespace std;
class Animal{
public:
    void eat()
    {
        cout<<"Eating..."<<endl;
    }
};

class Dog: public Animal{
public:
    void bark()
    {
        cout<<"barking..."<<endl;
    }
};

class BabyDog: public Dog{
public:
    void weep(){
        cout<<"weeping..."<<endl;
    }
};

int main()
{
    BabyDog b;
    b.eat();
    b.bark();
    b.weep();
    return 0;
}
