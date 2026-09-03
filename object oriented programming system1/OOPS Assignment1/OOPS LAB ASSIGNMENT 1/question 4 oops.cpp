#include <iostream>
#include <string>
using namespace std;

struct Student
{
    // Data Members / Properties
    string Name;
    int RollNo;
    string Degree;
    string Hostel;
    float CurrentCGPA;

    // Member Function: Add Student Details
    void addDetails()
    {
        cout << "Enter Student Name: ";
        cin >> student name;

        cout << "Enter Roll No: ";
        cin >> Roll no;

        cout << "Enter Degree: ";
        cin >> degree;

        cout << "Enter Hostel: ";
        cin >> Hostel;

        cout << "Enter Current CGPA: ";
        cin >> current cgpa;
    }

    // Member Function: Update Student Details
    void updateDetails()
    {
        cout << "\nEnter Updated Student Details:" << endl;

        cout << "Enter Student Name: ";
        cin >> Name;

        cout << "Enter Roll No: ";
        cin >> RollNo;

        cout << "Enter Degree: ";
        cin >> Degree;
    }

    // Member Function: Update CGPA
    void updateCGPA()
    {
        cout << "Enter New CGPA: ";
        cin >> CurrentCGPA;
    }

    // Member Function: Update Hostel
    void updateHostel()
    {
        cout << "Enter New Hostel: ";
        cin >> Hostel;
    }

    // Member Function: Display Student Details
    void displaydetails()
    {
        cout << "\n----- Student Details -----" << endl;
        cout << "Name       : " << Name << endl;
        cout << "Roll No    : " << RollNo << endl;
        cout << "Degree     : " << Degree << endl;
        cout << "Hostel     : " << Hostel << endl;
        cout << "Current CGPA: " << CurrentCGPA << endl;
    }
};

int main()
{
    // Creating Student object
    Student student;

    // Adding student details
    cout << "Enter Student Details:" << endl;
    student.addDetails();

    // Display original details
    cout << "\nOriginal Student Details:";
    student.displaydetails();

    // Update student details
    cout << "\n\nUpdating Student Details..." << endl;
    student.updateDetails();

    // Update CGPA
    cout << "\nUpdating CGPA..." << endl;
    student.updateCGPA();

    // Update Hostel
    cout << "\nUpdating Hostel..." << endl;
    student.updateHostel();

    // Display updated details
    cout << "\nUpdated Student Details:";
    student.displaydetails();

    return 0;
}