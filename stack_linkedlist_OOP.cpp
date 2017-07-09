//Implementation of stack using linked list  and OOP

#include<iostream>
using namespace std;

//node implemented as structure
struct node
{
    int info;
    node *link;
};

//definition of class stack
class stack
{
    private:
        node *top;

public:
    void push(int element);
    int pop();
    bool empty();
    stack();
    ~stack();

};


void stack::push(int element)
{
    node *newNode;

    newNode = new node;
    if( newNode == NULL)
        cout<<"\nStack is full!";

    newNode->info = element;
    newNode->link = top;
    top = newNode;
}


int stack::pop()
{
    node *current = top;
    int element = current->info;

    top = top->link;
    delete current;

    return element;
}


bool stack::empty()
{
    return top == NULL;
}


stack::stack()
{
    top = NULL;
}

stack::~stack() //stack is destroyed, memory is returned to freestore
{

    cout<<"\nStack is destroyed!";
    if ( top == NULL )
		return ;
	node *temp ;
	while ( top != NULL )
	{
		temp = top ;
		top = top -> link ;
		delete temp ;
	}

}
int main()
{
    stack  s;

    s.push(12);
    s.push(11);

    cout << s.pop() << " " << s.pop() << endl;



    return 0;
}



