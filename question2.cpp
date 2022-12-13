#include<iostream>
using namespace std;

template <class T>
T largest(T n1, T n2)
{
    return (n1>n2)? n1:n2;
}
int main()
{
    cout<<"for float :\n"<<largest<float>(4.5,3.5)<<endl;
    cout<<"for char  :\n"<<largest<char>('f','g')<<endl;
    cout<<"for int   :\n"<<largest<int>(3,6)<<endl;
    return 0;
}