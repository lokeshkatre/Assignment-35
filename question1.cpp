#include<iostream>
using namespace std;

template <class T>
T addition(T num1, T num2)
{
    return num1+ num2;
}
int main()
{
    cout<<"for int :"<<endl<< addition <int>(10,39)<<endl;
    cout<<"for float :"<<endl<<addition<float>(3.4,34.4)<<endl;
    return 0;
}