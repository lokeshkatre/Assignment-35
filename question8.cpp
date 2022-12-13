#include<iostream>
using namespace std;

template <class T>
class Stack{
    int top;
    T st[100];
    public:
    Stack(){
        top =-1;
    }
    void push(T n)
    {
        st[++top]= n;
    }
    T pop()
    {
        return st[top--];
    }

};

int main()
{
    Stack<int> int_stack;
    Stack<char> char_stack;

    int_stack.push(4);
    int_stack.push(5);
    int_stack.push(6);
    cout<<"int stack :"<<endl;
    cout<<int_stack.pop()<<endl;
    cout<<int_stack.pop()<<endl;
    cout<<int_stack.pop()<<endl;

    cout<<"\nchar stack :"<<endl;
    char_stack.push('d');
    char_stack.push('e');
    char_stack.push('f');
    cout<<char_stack.pop()<<endl;
    cout<<char_stack.pop()<<endl;
    cout<<char_stack.pop()<<endl;
    return 0;

}