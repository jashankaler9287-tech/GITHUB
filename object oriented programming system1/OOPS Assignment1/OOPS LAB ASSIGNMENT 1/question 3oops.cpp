#include <iostream>
using namespace std;

int main()
{
    int i;

    // ------------------------------------------------
    // 1. FOR LOOP - Initialization, Condition, Increment
    // ------------------------------------------------
    cout << "1. FOR LOOP - Normal:" << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << i << " ";
    }

    cout << endl << endl;


    // ------------------------------------------------
    // 2. FOR LOOP - Without Initialization
    // ------------------------------------------------
    cout << "2. FOR LOOP - Without Initialization:" << endl;

    i = 0;

    for (; i < 10; i++)
    {
        cout << i << " ";
    }

    cout << endl << endl;


    // ------------------------------------------------
    // 3. FOR LOOP - Without Increment
    // ------------------------------------------------
    cout << "3. FOR LOOP - Without Increment:" << endl;

    i = 0;

    for (; i < 10;)
    {
        cout << i << " ";
        i++;
    }

    cout << endl << endl;


    // ------------------------------------------------
    // 4. FOR LOOP - Without Initialization and Increment
    // ------------------------------------------------
    cout << "4. FOR LOOP - Without Initialization and Increment:"
         << endl;

    i = 0;

    for (; i < 10;)
    {
        cout << i << " ";
        i++;
    }

    cout << endl << endl;


    // ------------------------------------------------
    // 5. FOR LOOP - Infinite Loop with break
    // ------------------------------------------------
    cout << "5. FOR LOOP - Infinite Loop:" << endl;

    i = 0;

    for (;;)
    {
        cout << i << " ";
        i++;

        if (i == 10)
        {
            break;
        }
    }

    cout << endl << endl;


    // ------------------------------------------------
    // 6. WHILE LOOP - Normal
    // ------------------------------------------------
    cout << "6. WHILE LOOP - Normal:" << endl;

    i = 0;

    while (i < 10)
    {
        cout << i << " ";
        i++;
    }

    cout << endl << endl;


    // ------------------------------------------------
    // 7. WHILE LOOP - Condition False Initially
    // ------------------------------------------------
    cout << "7. WHILE LOOP - False Condition Initially:" << endl;

    i = 10;

    while (i < 10)
    {
        cout << i << " ";
        i++;
    }

    cout << "Loop did not execute." << endl << endl;


    // ------------------------------------------------
    // 8. DO-WHILE LOOP - Normal
    // ------------------------------------------------
    cout << "8. DO-WHILE LOOP - Normal:" << endl;

    i = 0;

    do
    {
        cout << i << " ";
        i++;
    }
    while (i < 10);

    cout << endl << endl;


    // ------------------------------------------------
    // 9. DO-WHILE LOOP - False Condition
    // ------------------------------------------------
    cout << "9. DO-WHILE LOOP - False Condition:" << endl;

    i = 10;

    do
    {
        cout << i << " ";
        i++;
    }
    while (i < 10);

    cout << endl;
    cout << "The loop executed once even though the condition was false."
         << endl << endl;


    // ------------------------------------------------
    // 10. DO-WHILE LOOP - Multiple Statements
    // ------------------------------------------------
    cout << "10. DO-WHILE LOOP - Multiple Statements:" << endl;

    i = 1;

    do
    {
        cout << "Value of i = " << i << endl;
        i++;
    }
    while (i <= 5);


    return 0;
}