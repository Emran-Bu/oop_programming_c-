#include<iostream>
using namespace std;

int main()
{
    int n, i, m, cnt=0;

    cout<<"Enter the number to check prime number = ";
    cin>>n;

    m = n / 2;

    for(i=2; i<=m; i++)
    {
        if(n%i == 0)
        {
            cnt = 1;
            break;
        }
    }

    if(cnt == 0 )
    {
        cout<<"Number is prime"<<endl;
    } else {
        cout<<"number is not prime";
    }

    return 0;
}

