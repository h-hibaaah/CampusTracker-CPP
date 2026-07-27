#include "attendence.h"
#include<iostream>
using namespace std;
#include<string>
#include<fstream>
P_attendence::P_attendence()
{
    cout<<"Welcome to the attendence management system for professors"<<endl;
}
void P_attendence:: P_mark_attendence()
{
    cout<<"Enter the attendence id"<<endl;  
    cin>>P_attendence_id;
    cout<<"Enter the attendence date"<<endl;
    cin>>P_attendence_date;
    ofstream file("record4.txt",ios::app);
    file<<P_attendence_id<<" "<<P_attendence_date<<" "<<"Present"<<endl;
    file.close();
    cout<<"Attendence marked successfully"<<endl;
}
void P_attendence::P_view_attendence()
{
    ifstream file("record4.txt");
    string line;
    while(getline(file,line))
    {
        cout<<line<<endl;
    }
    file.close();
}
S_attendence::S_attendence()
{
    cout<<"Welcome to the attendence management system for students"<<endl;
}
void S_attendence::S_mark_attendence()
{
    cout<<"Enter the attendence id"<<endl;  
    cin>>S_attendence_id;
    cout<<"Enter the attendence date"<<endl;
    cin>>S_attendence_date;
    ofstream file("record5.txt",ios::app);
    file<<S_attendence_id<<" "<<S_attendence_date<<" "<<"Present"<<endl;
    file.close();
    cout<<"Attendence marked successfully"<<endl;
}
void S_attendence::S_view_attendence()
{
    ifstream file("record5.txt");
    string line;
    while(getline(file,line))
    {
        cout<<line<<endl;
    }
    file.close();
}


