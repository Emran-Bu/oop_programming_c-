#include<iostream>
using namespace std;
class Circle
{
private:
        double r;
public:

    double circle_area(double n)
    {
        r = n;
        double area = 3.14*r*r;
        cout<<"Radius id = "<<r<<endl;
        cout<<"Area is = "<<area;
    }
};

int main()
{
    Circle c;
    c.circle_area(5.5);

    return 0;
}
