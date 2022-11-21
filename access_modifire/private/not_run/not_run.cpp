#include<iostream>
using namespace std;
class Circle
{
private:
        double r;
public:

    double circle_area()
    {
        return 3.14*r*r;
    }
};

int main()
{
    Circle c;
    c.r = 5.5;
    cout<<"Area is = "<<c.r<<endl;
    cout<<"Area is = "<<c.circle_area();
    return 0;
}
