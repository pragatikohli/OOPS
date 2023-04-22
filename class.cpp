#include <bits/stdc++.h>
using namespace std;
class Car
{
    int year;
    string make;
    int speed;
    // accessorrs
public:
    int getYear()
    {
        return year;
    }
    int setYear(int year)
    {
        this->year = year;
        return year;
    }
    string getMake()
    {
        return make;
    }
    string setMake(string make)
    {
        this->make = make;
        return make;
    }
    int getSpeed()
    {
        return speed;
    }
    int setSpeed(int speed)
    {
        this->speed = speed;
        return speed;
    }
};