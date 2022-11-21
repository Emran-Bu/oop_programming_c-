#include<iostream>
using namespace std;
class Bondhu
{
private:
    string name;
public:
    Bondhu(): name(){}
    friend string printName(Bondhu ); // friend function;
};

 string printName(Bondhu b)
{
    b.name = "Emran";
    return b.name;
}

int main()
{
    Bondhu b;
    cout<<"Bondhu Name : "<<printName(b)<<endl;
    return 0;
}
