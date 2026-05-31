#include <iostream>
#include <stack>

using namespace std;

int x = 0;
int y = 1;

int main()
{
    // create a stack of ints
    stack<int> MyStack1;
    stack<int> MyStack2;

    // push into stack1
    MyStack1.push(10);
    MyStack1.push(20);
    MyStack1.push(30);
    MyStack1.push(40);
    MyStack1.push(50);


    // push into stack2
    MyStack2.push(60);
    MyStack2.push(70);
    MyStack2.push(80);
    MyStack2.push(90);
    MyStack2.push(100);

    // using swap() function to swap elements of stacks
    MyStack1.swap(MyStack2);

    // printing the first stack

    cout << "\nMyStack1 = ";
    while(!MyStack1.empty())
    {
        // print top element
        cout << MyStack1.top() << " , ";

        // pop top element from stack
        MyStack1.pop();
    }

    // printing the second stack

    cout << "MyStack1 = ";
    while (!MyStack2.empty())
    {
        // print top element
        cout << MyStack2.top() << " , ";

        // pop top element from stack
        MyStack2.pop();
    }

    system("pause>0");
    return 0;
}

