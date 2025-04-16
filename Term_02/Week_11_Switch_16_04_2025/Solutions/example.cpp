#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a, b;
    cin>>a>>b;
    char op;
    cout<<"Enter operation: \n";
//    cout<<"1 for +\n2 for -\n3 for *\n";
    cin>>op;
    switch(op)
    {
    case '+':
        cout<<a+b<<endl;
        break;
    case '-':
        cout<<a-b<<endl;
        break;
    case '*':
        cout<<a*b<<endl;
        break;
    case 'v':
        cout<<"Koe chislo iskash da korenuvash?\n";
        char choice;
        cin>>choice;
        /// Ne e dobre
        switch(choice)
        {
        case 'a':
            cout<<sqrt(a)<<endl;
            break;
        case 'b':
            cout<<sqrt(b)<<endl;
            break;
        default:
            cout<<"Greshno chislo!"<<endl;
            break;
        }
        break;
    default:
        cout<<"Wrong operation!"<<endl;
        break;
    }

//    if(op == 1)
//    {
//        cout<<a+b;
//    }
//    else if(op == 2)
//    {
//        cout<<a-b;
//    }
//    else if(op == 3)
//    {
//        cout<<a*b;
//    }
//    else
//    {
//        cout<<"Wrong operation";
//    }


    return 0;
}
