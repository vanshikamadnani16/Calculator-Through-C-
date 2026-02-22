#include<iostream>
using namespace std;
class student
{
    public:
    int roll;
    string name;
    float marks;
};
int main()
{
    student s1;
    cout<<"Enter the roll number: ";
    cin>>s1.roll;
    cin.ignore();  // clears leftover newline

    cout<<"Enter the name: ";
    getline(cin, s1.name);  // allows for names with spaces
    cout<<"Enter the marks: ";
    cin>>s1.marks;
    cout<<"The details of the student are: "<<endl;
    cout<<"Roll number: "<<s1.roll<<endl;
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Marks: "<<s1.marks<<endl;
    return 0;
}
