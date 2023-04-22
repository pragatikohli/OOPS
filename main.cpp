#include <bits/stdc++.h>
#include "class.cpp"
using namespace std;
int main()
{
    Car hotRod;
    hotRod.setYear(2010);
    hotRod.setSpeed(10);
    hotRod.setMake("mazda");
    cout << hotRod.getYear() << endl;
    cout << hotRod.getSpeed() << endl;
    cout << hotRod.getMake() << endl;
}