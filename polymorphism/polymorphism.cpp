#include <iostream>
using namespace std;

class Cal
{
public:
    static int add(int a, int b)
    {
        return a + b ;
    }

    static int add(int a, int b, int c)
    {
        return a + b + c;
    }
};

int main()
{
    Cal c;
    cout<<c.add(10, 10)<<endl;
    cout<<c.add(10, 10, 20);

    //getchar();
    return 0;
}
