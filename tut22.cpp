#include<iostream>
using namespace std;
struct student
{
    int roll;
    string name;
    float marks;
};
int main()
{
    struct student s1;
    cout<<"Enter the roll number: ";
    cin>>s1.roll;
    cout<<"Enter the name: ";
    cin>>s1.name;
    cout<<"Enter the marks: ";
    cin>>s1.marks;
    cout<<"The details of the student are: "<<endl;
    cout<<"Roll number: "<<s1.roll<<endl;
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Marks: "<<s1.marks<<endl;
    return 0;
}