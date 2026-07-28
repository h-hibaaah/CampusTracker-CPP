#ifndef marks_h
#define marks_h
#include<iostream>
using namespace std;
#include<fstream>
#include<string>
class marks 
{
    public:
    marks();
    string name ;
    int id;
    int oop;
    int math;
    int geo;
    int eng;
    void add();
    void choice();
    int ch;
    void del();
    void update();
    void display();
};
#endif