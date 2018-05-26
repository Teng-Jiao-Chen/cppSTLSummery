#include "MapSamples.h"

#include <map>
#include <string>
#include <iostream>
using namespace std;

struct Stu {
    int num;
    string name;
};

void createMap(){
    map<string, double> map1;
    map<int, Stu> map2;
}

void accessMap(){
    map<string, double> map1;
    cout << "Start insertion" << endl;
    cout << "map1[\"Jack\"] = 99;" << endl;
    cout << "map1[\"Peter\"] = 97;" << endl;
    cout << "map1[\"Peter\"] = 98" << endl;
    cout << "map1.insert(pair<string,double>(\"Bill\", 100));" << endl;
    cout << "map1.insert(make_pair(\"Kate\", 95));" << endl;

    map1["Jack"] = 99;
    map1["Peter"] = 97;
    map1["Peter"] = 98;
    map1.insert(pair<string,double>("Bill", 100));
    map1.insert(make_pair("Kate", 95));

    cout << "After insertion" << endl;
    cout << "map1[\"Jack\"] "<< map1["Jack"] <<endl;
    cout << "map1[\"Peter\"] "<< map1["Peter"] <<endl;
    cout << "map1[\"Bill\"] "<< map1["Bill"] <<endl;
    cout << "map1[\"Kate\"] "<< map1["Kate"] <<endl;

    cout << "Iterate through the whole map" << endl;
    map<string,double>::iterator it;
    for(it=map1.begin();it!=map1.end();it++)
        cout<<(*it).first<<":"<<(*it).second<<endl;
}

void iterateMap(){
    map<string, double> map1;

    map1["Jack"] = 99;
    map1["Peter"] = 97;
    map1["Peter"] = 98;
    map1.insert(pair<string,double>("Bill", 100));
    map1.insert(make_pair("Kate", 95));

    // iterate from normal order
    map<string, double>::iterator it;
    for(it = map1.begin() ; it != map1.end() ; it ++) {
        cout << it->first << " " << it->second << endl;
    }

    // iterate from the reverse order
    map<string, double>::reverse_iterator it2;
    for(it2 = map1.rbegin() ; it2 != map1.rend() ; it2 ++) {
        cout << it2->first << " " << it2->second << endl;
    }

}

void findInMap(){
    map<string, double> map1;

    map1["Jack"] = 99;
    map1["Peter"] = 97;
    map1["Peter"] = 98;
    map1.insert(pair<string,double>("Bill", 100));
    map1.insert(make_pair("Kate", 95));

    if(map1.find("Marry") == map1.end()){
        cout << "No Marry Found." << endl;
    }

    if(map1.count("Marry") == 0){
        cout << "No Marry Found." << endl;
    }
}

void deleteFromMap(){
    map<string, double> map1;

    map1["Jack"] = 99;
    map1["Peter"] = 97;
    map1["Peter"] = 98;
    map1.insert(pair<string,double>("Bill", 100));
    map1.insert(make_pair("Kate", 95));

    cout << "Init state for the map" << endl;
    map<string, double>::iterator it;
    for(it = map1.begin() ; it != map1.end() ; it ++) {
        cout << it->first << " " << it->second << endl;
    }

    cout << "Map state after erase Jack" << endl;
    map1.erase("Jack");
    for(it = map1.begin() ; it != map1.end() ; it ++) {
        cout << it->first << " " << it->second << endl;
    }

    cout << "Map state after clear" << endl;
    map1.clear();

    cout << "map1.size() : " << map1.size() << endl;
    cout << "map1.empty() : " << map1.empty() << endl;
}
