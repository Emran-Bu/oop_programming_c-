#include<iostream>
using namespace std;
class Student{ //creating an class Student
public:
    int id;
    string name;
};

int main()
{
    Student s1; //creating an object of Student
    s1.id = 112;
    s1.name = "Emran";
    cout<<"id = "<<s1.id<<endl;
    cout<<"Name = "<<s1.name<<endl;
    return 0;
}
