#include<iostream>
using namespace std;
int main()
{
//    for(int i = 0, j = 10; i != 10 ; i++, j--)
//    {
//        cout<<i<<" "<<j<<endl;
//    }

//    for(int i = 10; i < 100; i++)
//    {
//        cout<<i<<" ";
//    }

//    for(int i = 50; i >= 30; i--)
//    {
//        cout<<i<<endl;
//    }

//    for(int i = 100; i < 301; i += 7)
//    {
//        cout<<i<<"  ";
//    }

//    for(int i = 3; i <= 100; i += 3)
//    {
//        cout<<i<<" ";
//    }
//    cout<<endl;
//    for(int i = 1; i <= 100; i++)
//    {
//        if(i % 3 == 0)
//        {
//            cout<<i<<" ";
//        }
//    }

//Да се напише програма, която въвежда
//две числа a и b (a < b) и отпечатва на
//екрана всички кратни на 10, които са между
//a и b.

//    int a, b;
//    cin>>a>>b;
//    for(int i = a; i < b; i++)
//    {
//        if(i % 10 == 0)
//        {
//            cout<<i<<" ";
//        }
//    }
//    int a, b;
//    cin>>a>>b;
//    for( ; a < b ; )
//    {
//        if(a % 10 == 0)
//        {
//            cout<<a<<" ";
//        }
//        a++;
//    }

//    int a, b, c, br = 0;
//    for(int i = 100; i < 1000; i++)
//    {
//        a = i / 100;
//        b = i / 10 % 10;
//        c = i % 10;
//        if(a + b + c == 19)
//        {
//            cout<<i<<" ";
//            br++;
//        }
//    }
//    cout<<endl<<br<<endl;


    int N, br = 0;
    cin>>N;
    for(int delitel = 2; delitel <= N / 2; delitel++)
    {
        if(N % delitel == 0)
        {
            br++;
        }
    }
    if(br == 0)
        {cout<<"prosto";}
    else
        {cout<<"sastavno";}




    return 0;
}
