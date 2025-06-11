#include<iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cin>>n; /// n = 99
    while(n != 0 && sum >= 10)
    {
        sum += n % 10;
        n /= 10;
    }
    sum = n % 10 + n / 10; /// sum = 18
    for( ; sum >= 10; )
    {
        sum = sum % 10 + sum / 10;
    }

    cout << sum;

    return 0;
}
