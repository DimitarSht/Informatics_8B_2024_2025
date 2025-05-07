#include<iostream>
using namespace std;
int main()
{
    int n, desetici, edinici;
    int suma = 0;
    int digit;
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = i; j != 0; j /= 10)
        {
            digit = j % 10;
            cout<<digit<<endl;
            suma += digit;
        }
    }
    cout<<suma;


    return 0;
}
