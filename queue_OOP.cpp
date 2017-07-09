//Aray and OOP implementation of Queue

#include<iostream>
using namespace std;

const int MAX = 5;

class queue
{
    private:

    int arr[MAX];
    int front, rear;

    public:

    queue();
    ~queue();

    void addq(int element);
    int delq();

    bool isQueueEmpty();
    bool isQueueFull();

    void display();
};

queue::queue()
{

    front = rear = -1;
}

bool queue::isQueueEmpty()
{
    return ((front == -1 )|| (front == rear + 1));
}

bool queue::isQueueFull()
{
    return (rear == MAX - 1);
}

void queue::addq(int element)
{
    if(!isQueueFull( ))
    {
        if(front == -1)
            front = 0;
        rear++;
        arr[rear] = element;

    }
    else
    {
        cout<<"\nQueue  is full!";
    }
}

int queue::delq()
{
    if(!isQueueEmpty())
    {
        int element = arr[front];
        front++;
        return element;

    }
    else
    {
        cout<<"\nQueue  is empty!";
        return -1;
    }
}

void queue::display()
{
    if(!isQueueEmpty())
    {
        cout<<"\nThe contents of the queue :\n";
        for(int i = front; i<= rear; i++)
            cout<<arr[i]<<"->";
        cout<<endl;
    }
    else
    {
        cout<<"\nQueue is empty!";
    }
}

queue::~queue()
{
    cout<<"\n\nQueue is destroyed!";
}
int main()
{
    queue Q;


    Q.addq(11);
    Q.display();

    Q.addq(22);
    Q.addq(33);
    Q.addq(44);
    Q.addq(55);
    Q.addq(66);
    Q.display();

    int val = Q.delq();
    if(val != -1)
        cout<<"\n\nThe element deleted : "<<val<<endl;

    Q.display();

    return 0;
}
