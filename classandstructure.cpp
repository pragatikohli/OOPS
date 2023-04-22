#include <bits/stdc++.h>
using namespace std;
// class
class Test1
{
    int x; // compiler error because x is private in class.
};
// inheritance with classes
class Parent
{
public:
    int parent;
};
class Child : public Parent
{
public:
    int child;
};

// structure
struct Test
{ // no error because x is public and we can access it in structure.
    int x;
};
// inheritance with structure
struct Base
{
    int base;
};
struct Derived : Base
{
    int derived;
};
int main()
{
    Test t;
    t.x = 20;
    cout << t.x << endl;
    // object of child class
    Child obj1;
    obj1.child = 7;
    obj1.parent = 91;
    cout << obj1.child << endl;
    cout << obj1.parent << endl;
    // structure variable
    Derived d;
    d.base = 100;
    d.derived = 200;
    cout << d.base << endl;
    cout << d.derived << endl;
}