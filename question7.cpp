#include<iostream>
#include<string>
using namespace std;

class Shape{
    string str;
public:
    Shape(){}
    Shape(string s){
       str =s;
    }
    void setShape(string s)
    {
        str =s ;
    }
    string getShape()
    {
        return str;
    }
};
template <typename T>
class circle : public Shape
{
    T x;
    T  y;
    T radius;
public:
    circle(T X, T Y, T r, string s): Shape(s)
    {
        x=X;
        y=Y;
        radius =r;
    }
    circle(T X, T Y , T r): Shape()
    {
        x =X;
        y = Y;
        radius = r;
    }
    circle (T r): Shape()
    {
        radius = r;
    }
    circle(){}

    T area()
    {
        return 3.14*radius*radius;
    }
};
int main()
{
    circle<float> c(0.0,0.0,15.0, "Circle");
    cout<<"Area of "<<c.getShape()<<" is "<<c.area();
    return 0;
}