#ifndef courses_h
#define courses_h
#include <iostream>
using namespace std;
#include <string>
class courses
{
    public:
    int id;
    string name;
    string teacher;
    int semester;
    int ch;
    courses();
    void choice();
    void add();
    void display();
    void Remove();
};
#endif