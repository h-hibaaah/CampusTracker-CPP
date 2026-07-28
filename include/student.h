#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

using namespace std;

class student
{
public:
    int id;
    string name;
    int ch;
    int semester;
    float cgpa;
    student();
    void choice();
    void add();
    void Remove();
    void display();
};

#endif