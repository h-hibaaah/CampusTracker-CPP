#include "courses.h"
#include <fstream>
#include <iostream>
using namespace std;
courses::courses()
{
    cout << "Welcome to the Courses Management System!" << endl;
}
void courses::choice()
{
    while(true)
    {
        cout << "Enter your choice: \n1. Add Course\n2. Remove Course\n3. Display Courses\n4. Exit\n";    
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
void courses::add()
{
    ofstream file("record3.txt", ios::app);

    if (!file)
    {
        cout << "Error opening file!" << endl;
        return;
    }

    cout << "Enter Course ID: ";
    cin >> id;

    cout << "Enter Course Name: ";
    cin >> name;

    cout << "Enter Course Teacher: ";
    cin >> teacher;

    cout << "Enter Course Semester: ";
    cin >> semester;

    file << id << " " << name << " " << teacher << " " << semester << endl;

    file.close();
}
void courses::display()
{
    string line;
    ifstream file("record3.txt");

    if (!file)
    {
        cout << "Error opening file!" << endl;
        return;
    }

    cout << "Course Records:" << endl;
    cout << "ID\tName\tTeacher\tSemester" << endl;
    while (getline(file, line))
    {
        cout << line << endl;
    }
}
void courses::Remove()
{
    cout << "Enter the ID of the course to remove: ";
    cin >> id;
    ifstream file("record3.txt");
    ofstream tempFile("temp.txt", ios::out);
    if (!file)
    {
        cout << "Error opening file!" << endl;
        return;
    }
    else
    {
        string line;
        while (getline(file, line))
        {
            if (line.find(to_string(id)) == string::npos)
            {
                tempFile << line << endl;
            }
        }
        file.close();
        tempFile.close();
        remove("record3.txt");
        rename("temp.txt", "record3.txt");
        cout << "Course with ID " << id << " has been removed." << endl;
    }
}