#include "VectorSamples.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool pairIncreaseCmp(pair<int, int> x, pair<int, int> y);
bool pairDecreaseCmp(pair<int, int> x, pair<int, int> y);

void createVector(){
    //默认初始化，v1为空
    vector<int> v1;

    //初始10个值为0的元素
    vector<int> v2(10);

    //初始10个值为8.6的元素
    vector<double> v3(10,8.6);
    for (auto i : v3) // 这里，auto是double类型
        cout << i << endl;

    // 这里auto是iterator类型
    for(auto i = v3.begin(); i != v3.end() ; i++)
        cout << *i << endl;

    // 用另一个vector初始化新的vector
    vector<double> v4(v3);

    // 用一个数组来初始化vector
    double arr[] = {0,1,2,3,4,5};
    vector<int> v5(arr+1, arr+4); // 从1到3，有头没尾

    for(auto i = v5.begin(); i != v5.end() ; i++)
        cout << *i << endl;
}

void accessVector(){
    vector<double> v1(10, 5);
    cout << "v1.size: " << v1.size() << endl;

    //直接通过下标就能访问
    v1[2]=3;
    cout<<v1[2]<<endl;

    //通过迭代器访问
    cout<<*(v1.begin()+5)<<endl;
}

void iterateVector(){
    vector<double> v1(10, 9);

    //①通过下标遍历
    for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<' ';
    cout << endl;

    //②通过迭代器遍历（推荐）
    vector<double>::iterator it;
    for(it=v1.begin();it!=v1.end();it++) {
        cout<<*it<<' ';
    }
    cout << endl;
}

void insertIntoVector(){
    vector<double> v;

    for(int i=0; i<10; i++)
        v.push_back(i);

    // ①元素尾部扩张
    v.push_back(10);

    for(auto num : v)
        cout << num << " ";
    cout << endl;

    // ②指定位置插入
    v.insert(v.begin(), -1); //头部插入-1
    v.insert(v.begin()+3,1.5);
    v.insert(v.end(),11);

    for(auto num : v)
        cout << num << " ";
    cout << endl;
}

void deleteFromVector(){
    vector<double> v;

    for(int i=0; i<10; i++)
        v.push_back(i);

    //删除单个元素
    v.erase(v.begin()+1);

    for(auto num : v)
        cout << num << " ";
    cout << endl;

    v.insert(v.begin()+1, 1);

    //删除区间内所有元素
    v.erase(v.begin()+2,v.begin()+5);

    for(auto num : v)
        cout << num << " ";
    cout << endl;

    //清空
    v.clear();
}

void sortVector() {
    vector<double> v;

    for (int i = 0; i < 10; i++) {
        double random_num = random() % 100;
        v.push_back(random_num);
    }

    //递增
    sort(v.begin(), v.end());

    for (auto num : v)
        cout << num << " ";
    cout << endl;

    //递减
    sort(v.begin(), v.end(), greater<int>());

    for (auto num : v)
        cout << num << " ";
    cout << endl;

    //自定义结构体排序

    vector<pair<double, double>> v2;

    for (int i = 0; i < 10; i++){
        v2.push_back( make_pair(i, 10));
    }

    sort(v2.begin(), v2.end(), pairDecreaseCmp);
    for(auto p : v2)
        cout << p.first << "-" << p.second << " ";
    cout << endl;

    sort(v2.begin(), v2.end(), pairIncreaseCmp);
    for(auto p : v2)
        cout << p.first << "-" << p.second << " ";
    cout << endl;
}

void miscellaneousInVector(){
    vector<int> v;

    for(int i=0; i<10; i++)
        v.push_back(i);

    //元素反向排列
    reverse(v.begin(),v.end());
    for (auto num : v)
        cout << num << " ";
    cout << endl;

    //获取向量大小（元素个数）
    int size = v.size();
    cout << "size: " << size << endl;

    //向量是否为空
    bool isEmpty = v.empty();
    cout << "isEmpty: " << isEmpty << endl;
}

bool pairDecreaseCmp(pair<int, int> x, pair<int, int> y) {
    return x.first > y.first;
}

bool pairIncreaseCmp(pair<int, int> x, pair<int, int> y) {
    return x.first < y.first;
}
