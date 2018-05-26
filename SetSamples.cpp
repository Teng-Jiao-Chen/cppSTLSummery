#include "SetSamples.h"
#include <iostream>
#include <set>
using namespace std;

void iterateSet(){
    set<int> s;
    s.insert(12);
    s.insert(34);
    s.insert(56);
    s.insert(78);
    s.insert(90);

    cout << "Iterate through the whole map" << endl;
    set<int>::iterator it;
    for(it=s.begin();it!=s.end();it++)
        cout << (*it) << endl;
}

void findInSet(){
    set<int> s;
    s.insert(12);
    s.insert(34);
    s.insert(56);
    s.insert(78);
    s.insert(90);

    if(s.find(12) != s.end()){
        cout << "find 12" << endl;
    }

    if(s.find(21) == s.end()){
        cout << "Do not find 21" << endl;
    }
}

void deleteFromSet(){
    set<int> s;
    s.insert(12);
    s.insert(34);
    s.insert(56);
    s.insert(78);
    s.insert(90);

    {
        cout << "Iterate through the whole map" << endl;
        set<int>::iterator it;
        for (it = s.begin(); it != s.end(); it++)
            cout << (*it) << endl;
    }
    s.erase(78);

    {
        cout << "Iterate through the whole map" << endl;
        set<int>::iterator it;
        for (it = s.begin(); it != s.end(); it++)
            cout << (*it) << endl;
    }
}