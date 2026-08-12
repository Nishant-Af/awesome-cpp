#include <iostream>
using namespace std;

struct StudentData
{
    string Name;
    int Roll_Number;
    string Subjects[5];
    int Marks[5];
    int CGPA = 9.8;
};

int main()
{
    StudentData s1;
    s1.Name = "Aditya Arpan";
    s1.Roll_Number = 69420;
    s1.Subjects[0] = "DSA";
    s1.Subjects[1] = "CN";
    s1.Subjects[2] = "CO";
    s1.Subjects[3] = "TOC";
    s1.Subjects[4] = "DBMS";
    s1.Marks[0] = 92;  
    s1.Marks[1] = 85;  
    s1.Marks[2] = 89;  
    s1.Marks[3] = 93;  
    s1.Marks[4] = 99;  
    s1.CGPA = 9.8;

    cout<<"Student Name: "<<s1.Name<<endl;
    cout<<"Roll Number: "<<s1.Roll_Number<<endl;
    cout<<"Subjects: ";
    for (int i = 0; i < 5; i++)
    {
        cout<<", "<<s1.Subjects[i];
    }
    cout<<endl;
    cout<<"Marks: ";
    for (int i = 0; i < 5; i++)
    {
        cout<<", "<<s1.Marks[i];
    }
    cout<<endl;

    cout<<"CGPA: "<<s1.CGPA<<endl;


    


    return 0;
}