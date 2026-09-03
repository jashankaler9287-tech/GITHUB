#include <iostream>
using namespace std;

int main()
{
    // 1. Display Hello World
    cout << "Hello World" << endl;

    // 2. Using \n - New Line
    cout << "\nUsing \\n (New Line):" << endl;
    cout << "Hello\nWorld" << endl;

    // 3. Using endl - New Line
    cout << "\nUsing endl (New Line):" << endl;
    cout << "Hello" << endl;
    cout << "World" << endl;

    // 4. Using \t - Tab
    cout << "\nUsing \\t (Tab):" << endl;
    cout << "Hello\tWorld" << endl;

    // 5. Using \a - Alarm Sound
    cout << "\nUsing \\a (Alarm Sound):" << endl;
    cout << "This is an alarm sound.\a" << endl;

    // 6. Using \r - Carriage Return
    cout << "\nUsing \\r (Carriage Return):" << endl;
    cout << "Hello World" << endl;
    cout << "Hi!\r" << endl;

    return 0;
}