#include<iostream>
using namespace std;

template <typename T>
void Swap(T &n1, T &n2)
{
    T temp = n1;
    n1 = n2;
    n2 = temp;
}
int main()
{
    int a=4,b=3;
    float c=3.4, d=4.5;
    Swap<int>(a,b);
    Swap<float>(c,d);
    cout<<"a= "<<a<<" b="<<b<<endl;
    cout<<"c= "<<c<<" d="<<d<<endl;

    return 0;
}