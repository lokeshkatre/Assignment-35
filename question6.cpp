#include <iostream>
using namespace std;

template <class T>
T sum(T a[], int length)
{
    T s = 0;
    for (int i = 0; i < length; i++)
        s = s + a[i];
    return s;
}
int main()
{
    int arr_int[5];
    float arr_float[5];
    cout << "Enter int arr:" << endl;
    for (int i = 0; i < 5; i++)
        cin >> arr_int[i];

    cout << "Enter float arr:" << endl;
    for (int i = 0; i < 5; i++)
        cin >> arr_float[i];

    cout << "sum of int array is " << sum<int>(arr_int, 5) << endl;
    cout << "sum of float array is " << sum<float>(arr_float, 5) << endl;
}