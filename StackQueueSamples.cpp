#include "StackQueueSamples.h"
#include <stack>
#include <queue>
#include <iostream>

using namespace std;

void stackBasic(){
    // init
    stack<int> s;

    // basic ops
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(99);

    // read top
    cout << "s.top: " << s.top() << endl;

    // check the size of stack
    cout << "s.size: " << s.size() << endl;

    // pop everything in the stack
    while(!s.empty())
    {
        s.pop(); // Note: when you pop, you do not automatically get an element.
        cout << "s.pop"  << endl;
        cout << "s.top: " << s.top() << endl;
        cout << "s.size: " << s.size() << endl << endl;
    }
}

void queueBasic(){
    // init a queue
    queue<int> q;

    // basic ops
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(99);

    // read front and back value
    int front = q.front();
    int back = q.back();

    // check the size of stack
    cout << "q.size: " << q.size() << endl;
    cout << "front: " << front << endl;
    cout << "back: " << back << endl;

    // pop everything in the stack
    while(!q.empty())
    {
        q.pop(); // Note: when you pop, you do not automatically get an element.
        cout << "q.pop"  << endl;
        cout << "q.front: " << q.front() << endl;
        cout << "q.size: " << q.size() << endl << endl;
    }
}