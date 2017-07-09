#include<iostream>
using namespace std;

const int MAX = 5;
class stack
{
    private:

    int arr[MAX];
    int top;

    public:

    stack();
    ~stack();
    bool isStackEmpty();
    bool isStackFull();
    void push(int ele);
    int pop();
    void display();
};

stack::stack()
{
    top = -1;
}

stack::~stack()
{
    cout<<"The stack is destroyed!\n";
}

bool stack::isStackEmpty()
{
   if( top == -1)
        return true;
    else
        return false;
}

bool stack::isStackFull()
{
   if( top == MAX - 1)
        return true;
    else
        return false;
}

void stack::push(int ele)
{
    if(!isStackFull())
        {
            top++;
            arr[top] = ele;

        }
    else
        {
            cout<<"\nStack is full!\n";
        }
}

int stack::pop()
{
    if(!isStackEmpty( ))
        {
            int ele;
            ele = arr[top] ;
            top--;
            return ele;
        }
    else
        {
            return -1;
        }

}

void stack::display( )
{
    if(!isStackEmpty( ))
    {
        cout<<"The Stack :\n";
        for(int i = top; i>= 0; i--)
            cout<<"\t"<<arr[i]<<endl;
    }
    else
        {
            cout<<"\nThe stack is empty!\n";
        }
}

int main()
{
    stack stk;

    stk.push(11);

    stk.display();

    stk.push(22);
    stk.display( );

    stk.push(33);
    stk.display();

    stk.push( 44);
    stk.display();

    stk.push(55);
    stk.display();

    stk.push(66);
    stk.display();

    int val;
    for(int i = 0; i< 6; i++)
    {
        val = stk.pop();
        if(val !=  -1)
        {
            cout<<"The element popped : "<<val<<endl;
            stk.display();
        }
        else
        {
            cout<<"\nThe stack is empty!\n";
        }
    }


    return 0;
}
