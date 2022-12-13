#include<iostream>
using namespace std;

template <class T>
T largest(T n1, T n2, T n3)
{
    return max(n1,max(n2,n3)); 
}

int main()
{
    cout<<"for int :\n"<<largest<int>(3,4,4)<<endl;
    cout<<"for float:\n"<<largest<float>(4.65,3.2,5.3)<<endl;
    return 0;
}