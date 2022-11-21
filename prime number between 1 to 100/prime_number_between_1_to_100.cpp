#include<iostream>
using namespace std;

int main()
{
    int i,j;

    for(i=1; i<=50; i++)
    {
        for(j=2; j<i; j++)
        {

            if(i%j == 0)
            {
                cout<<"not prime = "<<i<<endl;
                break;
            }
        }
        if(j==i)
        {
            cout<<"prime = "<<j<<endl;
        }
    }
    return 0;
}
