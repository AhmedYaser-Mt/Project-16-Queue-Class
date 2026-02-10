#include <iostream>
#include "clsMyQueue.h"

using namespace std;

int main()
{
    clsMyQueue <short> MyQueue;

    MyQueue.Push(10);
    MyQueue.Pop();

    cout << MyQueue.Front() << endl;

    /*MyQueue.Push(10);
    MyQueue.Push(20);
    MyQueue.Push(30);
    MyQueue.Push(40);
    MyQueue.Push(50);

    cout << "\nQueue :\n";
    MyQueue.Print();

    cout << "\nQueue Size  : " << MyQueue.Size() << endl;
    cout << "\nQueue Front : " << MyQueue.Front() << endl;
    cout << "\nQueue Back  : " << MyQueue.Back() << endl;

    MyQueue.Pop();

    cout << "\n\nQueue after pop() :\n";
    MyQueue.Print();*/

    system("pause>0");
    return 0;
}
