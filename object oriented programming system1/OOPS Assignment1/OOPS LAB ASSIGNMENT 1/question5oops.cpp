. Difference between private and public access/scope
Basis	private	public
Access	Accessible only inside the class	Accessible inside and outside the class
Outside class	Cannot be accessed directly	Can be accessed through an object
Purpose	Used for data hiding and security	Used to provide access to class functionality
Encapsulation	Helps achieve encapsulation	Provides the interface to use the class
Default in a class	private is the default	Must be explicitly written
Example	private: int rollNo;	public: void display();

Simple idea:

private = Keep it hidden
public = Allow the user to use it
2. Question No. 4 using a Class

In the previous question, we created a Student structure having:

Data members:

Name
Roll No
Degree
Hostel
Current CGPA

Member functions:

addDetails()
updateDetails()
updateCGPA()
updateHostel()
display()

Now we will implement the same question using a class       
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    // Private data members
    string name;
    int rollNo;
    string degree;
    string hostel;
    float currentCGPA;

    // Private member function
    void inputCGPA()
    {
        cout << "Enter Current CGPA: ";
        cin >> currentCGPA;
    }

public:
    // Public member function
    void addDetails()
    {
        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Roll No: ";
        cin >> rollNo;
        cin.ignore();

        cout << "Enter Degree: ";
        getline(cin, degree);

        cout << "Enter Hostel: ";
        getline(cin, hostel);

        inputCGPA();   // Calling private function
    }

    // Public member function
    void updateDetails()
    {
        int choice;

        cout << "\nWhat do you want to update?\n";
        cout << "1. Name\n";
        cout << "2. Roll No\n";
        cout << "3. Degree\n";
        cout << "4. Hostel\n";
        cout << "Enter Choice: ";
        cin >> choice;
        cin.ignore();

        switch(choice)
        {
            case 1:
                cout << "Enter New Name: ";
                getline(cin, name);
                break;

            case 2:
                cout << "Enter New Roll No: ";
                cin >> rollNo;
                cin.ignore();
                break;

            case 3:
                cout << "Enter New Degree: ";
                getline(cin, degree);
                break;

            case 4:
                cout << "Enter New Hostel: ";
                getline(cin, hostel);
                break;

            default:
                cout << "Invalid Choice!";
        }
    }

    // Public member function
    void updateCGPA()
    {
        inputCGPA();
    }

    // Public member function
    void updateHostel()
    {
        cout << "Enter New Hostel: ";
        getline(cin, hostel);
    }

    // Public member function
    void display()
    {
        cout << "\n----- STUDENT DETAILS -----\n";
        cout << "Name          : " << name << endl;
        cout << "Roll No       : " << rollNo << endl;
        cout << "Degree        : " << degree << endl;
        cout << "Hostel        : " << hostel << endl;
        cout << "Current CGPA  : " << currentCGPA << endl;
        cout << "---------------------------\n";
    }
};

int main()
{
    Student s;
    int choice;

    do
    {
        cout << "\n===== MENU =====\n";
        cout << "1. Add Details\n";
        cout << "2. Update Details\n";
        cout << "3. Update CGPA\n";
        cout << "4. Update Hostel\n";
        cout << "5. Display\n";
        cout << "6. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;
        cin.ignore();

        switch(choice)
        {
            case 1:
                s.addDetails();
                break;

            case 2:
                s.updateDetails();
                break;

            case 3:
                s.updateCGPA();
                break;

            case 4:
                s.updateHostel();
                break;

            case 5:
                s.display();
                break;

            case 6:
                cout << "Exiting program...";
                break;

            default:
                cout << "Invalid Choice!";
        }

    } while(choice != 6);

    return 0;
}
