#include <iostream>
using namespace std;
#include "student.h"
#include "courses.h"
#include "attendence.h"
#include "marks.h"
#include "teacher.h"
int main()
{
   int choice;
    cout<<"Welcome to the Academix System!"<<endl;
    while (true)
    {
        cout<<"Enter your choice: \n1. Student Management\n2. Courses Management\n3. Attendence Management Professor\n4. Marks Management\n5. Teacher Management\n6. Attendence Management Student\n7. Exit\n";    
        cin>>choice;
      switch (choice)
{
    case 1:
    {
        student s;
        s.choice();
        break;
    }

    case 2:
    {
        courses c;
        c.choice();
        break;
    }

    case 3:
    {
        P_attendence p;
        p.P_choice();
        break;
    }

    case 4:
    {
        marks m;
        m.choice();
        break;
    }

    case 5:
    {
        teacher t;
        t.choice();
        break;
    }

    case 6:
    {
        S_attendence s;
        s.S_choice();
        break;
    }
    case 7:
    {
        cout << "Exiting the program." << endl;
        exit(0);
    }
    default:
    {
        cout << "Invalid choice.\n";
    }
}
    }
}