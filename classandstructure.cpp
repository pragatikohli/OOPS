#include <bits/stdc++.h>
using namespace std;
// class
class Test1
{
    int x;
};
// compiler error because x is private in class.
// structure
struct Test
{
    int x;
};
// no error because x is public and we can access it in structure.
int main()
{
    Test t;
    t.x = 20;
    cout << t.x << endl;
}