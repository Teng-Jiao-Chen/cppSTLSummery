#include "PriorityQueueSamples.h"
#include <iostream>
#include <queue>
#include <string>
using namespace std;

void priorityQueueBasic(){
    priority_queue<int> p;

    p.push(1);
    p.push(2);
    p.push(8);
    p.push(5);
    p.push(43);

    while( !p.empty() ){
        cout << p.top() << endl;
        p.pop();
    }
}

void priorityQueueStruct(){

    struct CustomCompare
    {
        bool operator()(const int& lhs, const int& rhs)
        {
            return lhs > rhs;
        }
    };

    priority_queue<int,vector<int>, CustomCompare > pq;

    pq.push(3);
    pq.push(5);
    pq.push(1);
    pq.push(8);

    while( !pq.empty() ){
        cout << pq.top() << endl;
        pq.pop();
    }
}

class Human {
    public:
        string name;
        int age;
        Human(string name, int age);
};

// 这些方法一般都是在cpp的文件里面定义的
Human::Human(string name, int age) : name(name), age(age){}
bool operator<(Human a, Human b) {return a.age < b.age ? true : false;}

void priorityQueueClass(){
    Human p1("Child",5);
    Human p2("Grandfather",70);
    Human p3("Older son",20);
    Human p4("Father",40);
    Human p5("Younger son",10);

    priority_queue<Human> Q;

    Q.push(p1);
    Q.push(p2);
    Q.push(p3);
    Q.push(p4);
    Q.push(p5);

    while(!Q.empty()) {

        cout << "Name: " << Q.top().name << ", age: " << Q.top().age << endl;
        Q.pop();
    }
}
