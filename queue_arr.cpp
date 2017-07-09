//Aray implementation of Queue

#include<iostream>
using namespace std;

const int MAX = 5;

struct queue
{

    int arr[MAX];
    int front, rear;
};

void initialize(queue & q)
{

    q.front = q.rear = -1;
}

bool isQueueEmpty(queue q)
{
    return ((q.front == -1 )|| (q.front == q.rear + 1));
}

bool isQueueFull(queue q)
{
    return (q.rear == MAX - 1);
}

void addq(queue &q, int element)
{
    if(!isQueueFull( q))
    {
        if(q.front == -1)
            q.front = 0;
        q.rear++;
        q.arr[q.rear] = element;

    }
    else
    {
        cout<<"\nQueue  is full!";
    }
}

int delq(queue &q)
{
    if(!isQueueEmpty(q))
    {
        int element = q.arr[q.front];
        q.front++;
        return element;

    }
    else
    {
        cout<<"\nQueue  is empty!";
        return -1;
    }
}

void display(queue q)
{
    if(!isQueueEmpty(q))
    {
        cout<<"\nThe contents of the queue :\n";
        for(int i = q.front; i<= q.rear; i++)
            cout<<q.arr[i]<<"->";
        cout<<endl;
    }
    else
    {
        cout<<"\nQueue is empty!";
    }
}

int main()
{
    queue Q;
    initialize(Q);

    addq(Q, 11);
    display(Q);

    addq(Q,22);
    addq(Q,33);
    addq(Q,44);
    addq(Q,55);
    addq(Q,66);
    display(Q);
    int val = delq(Q);
    if(val != -1)
        cout<<"\n\nThe element deleted : "<<val<<endl;

    display(Q);

    return 0;
}
