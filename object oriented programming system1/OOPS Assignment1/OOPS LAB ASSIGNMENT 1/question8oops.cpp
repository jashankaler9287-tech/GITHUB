#include <iostream>
using namespace std;

namespace First
{
    int number = 10;

    void display()
    {
        cout << "This is First namespace." << endl;
        cout << "Number = " << number << endl;
    }
}

namespace Second
{
    int number = 20;

    void display()
    {
        cout << "This is Second namespace." << endl;
        cout << "Number = " << number << endl;
    }
}

int main()
{
    // Accessing First namespace
    First::display();
    cout << "First number = " << First::number << endl;

    cout << endl;

    // Accessing Second namespace
    Second::display();
    cout << "Second number = " << Second::number << endl;

    return 0;
}