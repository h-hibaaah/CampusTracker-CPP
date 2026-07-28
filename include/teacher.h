#ifndef TEACHER_H
#define TEACHER_H
#include <iostream>
using namespace std;
#include <string>
class teacher
{
public:
    int id;
    string name;
string subject;
int salary;
int ch;
    teacher();
    void choice();
    void add();
    void Remove();
    void display();
};
#endif