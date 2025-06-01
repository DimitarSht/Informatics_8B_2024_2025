#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cin>>a>>b;

    if(a < b)
    {
        swap(a, b);
    }

    for(int i = b; i > 0; i--)
    {
        if(a % i == 0 && b % i == 0)
        {
            cout<<i<<endl;
            break;
        }
    }
    int ostatak;
    for( ; b != 0 ; )
    {
        ostatak = a % b;
        a = b;
        b = ostatak;
    }
    cout<<a<<endl;

    return 0;
}
