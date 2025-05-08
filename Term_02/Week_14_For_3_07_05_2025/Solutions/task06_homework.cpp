#include<iostream>
using namespace std;
int main()
{
//    double suma = 0.0;
//    int N;
//    cin>>N;
//
////    1/2 + 2/3 + 3/4 ...
//
//    for(double i = 1; i < N; i++)
//    {
//        suma = suma + (i / (i + 1));
//    }
//
//    cout<<suma<<endl;

    int N, suma = 0;
    cin>>N;

    for(int i = 1; i < 2 * N; i += 2)
    {
        suma = suma + i * (i + 1);
    }
    cout<<suma;

    return 0;
}


