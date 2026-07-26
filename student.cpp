#include <iostream>
using namespace std;
#include <fstream>
#include "student.h"
student::student()
{
    cout << "Welcome to the School Management System!" << endl;
}
void student::choice()
{
    while(true)
    {
cout<<"Enter your choice: \n1. Add Student\n2. Remove Student\n3. Display Students\n4. Exit\n";    
cin>>ch;
switch(ch)
{
    case 1:
        add();
        break;
    case 2:
        Remove();
        break;
    case 3:
        display();
        break;
    case 4:
        cout<<"Exiting the program."<<endl;
        exit(0);
    default:
        cout<<"Invalid choice. Please try again."<<endl;
}}}
void student::add()
{
    ofstream file("record.txt", ios::app);

    if (!file)
    {
        cout << "Error opening file!" << endl;
        return;
    }

    cout << "Enter Student ID: ";
    cin >> id;

    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter Student Semester: ";
    cin >> semester;

    cout << "Enter Student CGPA: ";
    cin >> cgpa;

    file << id << " " << name << " " << semester << " " << cgpa << endl;

    file.close();

    cout << "Student added successfully!" << endl;
}
void student::Remove()
{
    cout<<"Enter Student ID to remove: ";
    cin>>id;
    ifstream file("record.txt");
    ofstream temp("temp.txt");
    if (!file)
    {
        cout << "Error opening file!" << endl;
        return;
    }
    if (!temp)
    {
        cout << "Error creating temporary file!" << endl;
        return;
    }
    string line;
    while (getline(file, line))
    {
        if (line.find(to_string(id)) == string::npos)
        {
            temp << line << endl;
        }
    }
    file.close();
    temp.close();
    remove("record.txt");
    rename("temp.txt", "record.txt");
    cout << "Student removed successfully!" << endl;

}
void student::display()
{
    ifstream file("record.txt");
    if (!file)
    {
        cout << "Error opening file!" << endl;
        return;
    }
    string line;
    cout << "Student Records:" << endl;
    while (getline(file, line))
    {
        cout << line << endl;
    }
    file.close();
}