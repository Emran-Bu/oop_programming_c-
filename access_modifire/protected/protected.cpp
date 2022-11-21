#include<bits/stdc++.h>
using namespace std;
class Parent
{
protected:
    int id_protected;
};

class Child: public Parent
{
public:
    void setId(int id)
    {
        id_protected = id;
    }

    void display()
    {
        cout<<"id_protected = "<<id_protected;
    }
};

int main()
{
     Child c;
     c.setId(15);
     c.display();
     return 0;
}
