//Stack Array operations

#include <bits/stdc++.h>
using namespace std;
template<class T>
class Stack
{
    private:
    T *st;
    int size;
    int top;

    public:

    Stack()
    {
        size=10;top=-1;st=new T[size];
    }

    Stack(int size)
    {
        this->size=size;top=-1;st=new T[this->size];
    }

    void push(T x);
    T pop();
    T peek(int index);
    int stacktop();
    int isEmpty();
    int isFull();
    void Display();
};

template<class T>
void Stack<T>::push(T x)
{
    if(isFull())
    {
          cout<<"Stack Overflow"<<endl;
    }
    else
    {
        top++;
        st[top]=x;
    }
}
template<class T>
T Stack<T>::pop()
{
    T x=-1;

    if(isEmpty())
    {
        cout<<"Stack underflow"<<endl;
    }
    else
    {
        x=st[top];
        top--;
    }
    return x;
}

template<class T>

T Stack<T>::peek(int index)
{
    T x=-1;
    if(top-index+1<0)
    {cout<<"Invalid Index"<<endl;}
    else
    x=st[top-index+1];

    return x;
}
template<class T>
int Stack<T>::stacktop()
{
if(isEmpty())
return -1;
return st[top];
}
template<class T>
int Stack<T>::isFull()
{
return top==size-1;
}

template<class T>
int Stack<T>::isEmpty()
{
return top==-1;
}

template<class T>
void Stack<T>::Display()
{
for(int i=top;i>=0;i--)
cout<<st[i]<<" ";
cout<<endl;
}

void reverse(char str[])
{
    // Create a stack of capacity
    //equal to length of string
    int n = strlen(str);
    Stack<char> stk(20);
    //Stack* stack = createStack(n);

    // Push all characters of string to stack
    int i;
    for (i = 0; i < n; i++)
    {
        //push(stack, str[i]);
        stk.push(str[i]);
    }

    // Pop all characters of string and
    // put them back to str
    for (i = 0; i < n; i++)
    {
        str[i] = stk.pop();
    }

}

int main()
{
/*
Stack<char> stk(7);
stk.push('a');
stk.push('b');
stk.push('c');
stk.push('d');
stk.push('e');
stk.push('f');
cout<<"\n";
stk.Display();
cout<<"\n";cout<<"\n";cout<<"Peek : ";
cout<<stk.peek(5)<<endl;
*/

    char str[] = "Utkarsh Yadav";
    reverse(str);
    cout << "Reversed string is " << str;


return 0;
}
