#include<iostream>
using namespace std;
#include "marks.h"
marks::marks()
{
    cout<<"Welcome to marks management system"<<endl;
}
void marks::add()
{
    cout<<"Enter students id"<<endl;
    cin>>id;
    cout<<"Enter name of the student"<<endl;
    cin>>name;
    cout<<"Enter \"Object Oriented Programming\" marks"<<endl;
    cin>>oop;
    cout<<"Enter \"Mathematics\" marks"<<endl;
    cin>>math;
    cout<<"Enter \"Geography\" marks"<<endl;
    cin>>geo;
    cout<<"Enter \"English\" marks"<<endl;
    cin>>eng;
    cout<<"Marks added successfully!"<<endl;
    ofstream file("record6.txt",ios::app);
    file<<id<<" "<<name<<" "<<oop<<" "<<math<<" "<<geo<<" "<<eng<<endl;
    file.close();
}
void marks::del()
{
    int del_id;
    cout<<"Enter the id of the student whose marks you want to delete"<<endl;
    cin>>del_id;
    ifstream file("record6.txt");
    ofstream temp("temp.txt");
    string line;
    while(getline(file,line))
    {
        if(line.find(to_string(del_id))==string::npos)
        {
            temp<<line<<endl;
        }
    }
    file.close();
    temp.close();
    remove("record6.txt");
    rename("temp.txt","record6.txt");
    cout<<"Marks deleted successfully!"<<endl;
}
void marks::update()
{
    int update_id;
    cout<<"Enter the id of the student whose marks you want to update"<<endl;
    cin>>update_id;
    ifstream file("record6.txt");
    ofstream temp("temp.txt");
    string line;
    while(getline(file,line))
    {
        if(line.find(to_string(update_id))==string::npos)
        {
            temp<<line<<endl;
        }
        else
        {
            cout<<"Enter new name of the student"<<endl;
            cin>>name;
            cout<<"Enter new \"Object Oriented Programming\" marks"<<endl;
            cin>>oop;
            cout<<"Enter new \"Mathematics\" marks"<<endl;
            cin>>math;
            cout<<"Enter new \"Geography\" marks"<<endl;
            cin>>geo;
            cout<<"Enter new \"English\" marks"<<endl;
            cin>>eng;
            temp<<update_id<<" "<<name<<" "<<oop<<" "<<math<<" "<<geo<<" "<<eng<<endl;
        }
    }
    file.close();
    temp.close();
    remove("record6.txt");
    rename("temp.txt","record6.txt");
    cout<<"Marks updated successfully!"<<endl;
}
void marks::display()
{
    ifstream file("record6.txt");
    string line;
    while(getline(file,line))
    {
        cout<<line<<endl;
    }
    file.close();
}