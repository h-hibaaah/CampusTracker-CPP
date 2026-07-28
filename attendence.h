#ifndef attendence_h
#define attendence_h
#include<iostream>
using namespace std;
#include<string>

class P_attendence
{
    public:
    P_attendence();
    void P_mark_attendence();
    void P_view_attendence();
    int P_attendence_id;
    int P_ch;
    void P_choice();
    string P_attendence_date;


};
class S_attendence
{
    public:
    S_attendence();
    void S_mark_attendence();
    int S_ch;
    void S_choice();
    void S_view_attendence();
    int S_attendence_id;
    string S_attendence_date;
};
#endif
