#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b)
    {
        if (a == c)
            cout << "no";
        else
            cout << "yes";
    }
    else
    {
        if (a == c)
            cout << "yes";
        else if (b == c)
            cout << "yes";
        else
            cout << "no";
    }
    return 0;
}
