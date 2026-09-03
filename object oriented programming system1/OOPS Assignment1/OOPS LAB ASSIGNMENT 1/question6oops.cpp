#include <iostream>
using namespace std;

class Student
{
private:
    // Private member function
    void privateFunction()
    {
        cout << "Private member function is called." << endl;
    }

public:
    // Public member function
    void publicFunction()
    {
        cout << "Public member function is called." << endl;

        // Calling private function inside public function
        privateFunction();
    }
};

int main()
{
    Student s;

    // Calling public function using object
    s.publicFunction();

    return 0;
}