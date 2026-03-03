#include <iostream>
using namespace std;
struct student
{
    int roll;
    string name;
    float percentage;
};
student students[100]; // Array of students
int totalStudents = 0;
// Function to add student
void addStudent()
{
    cout << "\nEnter Roll Number: ";
    cin >> students[totalStudents].roll;

    cout << "Enter Student Name: ";
    cin.ignore();
    getline(cin, students[totalStudents].name);

    cout << "Enter Percentage: ";
    cin >> students[totalStudents].percentage;

    totalStudents++;

    cout << "Student Added Successfully!\n";
}
// Function to display all students
void displayStudents()
{
    if(totalStudents == 0)
    {
        cout << "No students available.\n";
        return;
    }

    for(int i = 0; i < totalStudents; i++)
    {
        for(int j=0; j<totalStudents-1-i; j++)
        {
            if(students[j].roll > students[j+1].roll)
            {
                swap(students[j], students[j+1]);
            }
        }
        cout << "\nRoll Number: " << students[i].roll;
        cout << "\nName: " << students[i].name;
        cout << "\nPercentage: " << students[i].percentage << "\n";
    }
}
// Search Student
void searchStudent()
{
    int roll;
    cout << "Enter Roll Number to search: ";
    cin >> roll;

    for(int i = 0; i < totalStudents; i++)
    {
        if(students[i].roll == roll)
        {
            cout << "\nRoll Number: " << students[i].roll;
            cout << "\nName: " << students[i].name;
            cout << "\nPercentage: " << students[i].percentage << "\n";
            return;
        }
    }
    cout << "Student not found.\n";
}
void updateStudent()
{
    int roll;
    cout << "Enter Roll Number to update: ";
    cin >> roll;

    for(int i = 0; i < totalStudents; i++)
    {
        if(students[i].roll == roll)
        {
            cout << "\nEnter New Name: ";
            cin.ignore();
            getline(cin, students[i].name);

            cout << "Enter New Percentage: ";
            cin >> students[i].percentage;

            cout << "Student Updated Successfully!\n";
            return;
        }
    }
    cout << "Student not found.\n";
}
// Delete Student
void deleteStudent()
{
    int roll;
    cout << "Enter Roll Number to delete: ";
    cin >> roll;

    for(int i = 0; i < totalStudents; i++)
    {
        if(students[i].roll == roll)
        {
            // Shift remaining students left
            for(int j = i; j < totalStudents - 1; j++)
            {
                students[j] = students[j + 1];
            }
            totalStudents--;
            cout << "Student Deleted Successfully!\n";
            return;
        }
    }
    cout << "Student not found.\n";
}
int main()
{
    int choice;

    do
    {
        cout << "\n===== STUDENT MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Update Student";
        cout << "\n5. Delete Student";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: updateStudent(); break;
            case 5: deleteStudent(); break;
            default: cout << "Invalid choice! Please try again.\n";
        }
    } while(choice != 5);

    return 0;
}

