#include<iostream>
using namespace std;

const int MAX = 5;
struct stack
{
    int arr[MAX];
    int top;
};

void initialize(stack &s)
{
    s.top = -1;
}

bool isStackEmpty(stack s)
{
   if( s.top == -1)
        return true;
    else
        return false;
}

bool isStackFull(stack s)
{
   if( s.top == MAX - 1)
        return true;
    else
        return false;
}

void push(stack & s, int ele)
{
    if(!isStackFull(s))
        {
            s.top++;
            s.arr[s.top] = ele;

        }
    else
        {
            cout<<"\nStack is full!\n";
        }
}

int pop(stack & s)
{
    if(!isStackEmpty(s))
        {
            int ele;
            ele = s.arr[s.top] ;
            s.top--;
            return ele;
        }
    else
        {
            return -1;
        }

}

void display(stack s)
{
    if(!isStackEmpty(s))
    {
        cout<<"The Stack :\n";
        for(int i = s.top; i>= 0; i--)
            cout<<"\t"<<s.arr[i]<<endl;
    }
    else
        {
            cout<<"\nThe stack is empty!\n";
        }
}

int main()
{
    stack stk;
    initialize(stk);
    push(stk, 11);

    display(stk);

    push(stk, 22);
    display(stk);

    push(stk, 33);
    display(stk);

    push(stk, 44);
    display(stk);

    push(stk, 55);
    display(stk);

    push(stk, 66);
    display(stk);

    int val;
    for(int i = 0; i< 6; i++)
    {
        val = pop(stk);
        if(val !=  -1)
        {
            cout<<"The element popped : "<<val<<endl;
            display(stk);
        }
        else
        {
            cout<<"\nThe stack is empty!\n";
        }
    }


    return 0;
}
