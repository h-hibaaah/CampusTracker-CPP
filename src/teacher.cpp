#include <iostream>
using namespace std;
#include <string>
#include <fstream>
#include "teacher.h"
teacher::teacher()
{
    cout << "Welcome to the School Management System!" << endl;
}
void teacher::choice()
{
    while(true)
    {
        cout << "Enter your choice: \n1. Add Teacher\n2. Remove Teacher\n3. Display Teachers\n4. Exit\n";    
        cin >> ch;
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
                cout << "Exiting the program." << endl;
                exit(0);
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
}
void teacher::add()
{
    ofstream file("record2.txt", ios::app);

    if (!file)
    {
        cout << "Error opening file!" << endl;
        return;
    }

    cout << "Enter Teacher ID: ";
    cin >> id;

    cout << "Enter Teacher Name: ";
    cin >> name;

    cout << "Enter Teacher Subject: ";
    cin >> subject;

    cout << "Enter Teacher Salary: ";
    cin >> salary;

    file << id << " " << name << " " << subject << " " << salary << endl;

    file.close();

    cout << "Teacher added successfully!" << endl;
}
void teacher::Remove()
{
    cout<< "Enter the ID of the teacher to remove: ";
    cin >> id;
    ifstream file("record2.txt");
    ofstream tempFile("temp.txt", ios::out);
    if (!file)
    {
        cout << "Error opening file!" << endl;
        return;
    }
    else
    {
        string line;
        while(getline(file, line))
    {
        if (line.find(to_string(id)) == string::npos)
        {
            tempFile << line << endl;
        }
    }
    tempFile.close();
    file.close();
    remove("record2.txt");
    rename("temp.txt", "record2.txt");
cout<<"Teacher with ID " << id << " has been removed." << endl;
    }
}
void teacher::display()
{
    ifstream file("record2.txt");
    if (!file)
    {
        cout << "Error opening file!" << endl;
        return;
    }
    else
    {
        string line;
        cout << "Teacher Records:" << endl;
        while(getline(file, line))
        {
            cout << line << endl;
        }
        file.close();
    }
}