#include <bits/stdc++.h>
using namespace std;
class Student
{
    int rno;
    string name;
    double fee;

public:
    // constructor
    Student()
    {
        this->rno = 10;
        this->name = "Ramesh";
        this->fee = 100.20;
    }
    void display()
    {
        cout << endl
             << rno << " " << name << " " << fee;
    }
};
int main()
{
    Student s;
    s.display();
    return 0;
}