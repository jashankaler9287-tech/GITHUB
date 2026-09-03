#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imaginary;

public:
    // Function to initialize values
    void set()
    {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imaginary;
    }

    // Function to display complex number
    void display()
    {
        if (imaginary >= 0)
            cout << real << " + " << imaginary << "i" << endl;
        else
            cout << real << " - " << -imaginary << "i" << endl;
    }

    // Function to add two complex numbers
    Complex sum(Complex c)
    {
        Complex result;

        result.real = real + c.real;
        result.imaginary = imaginary + c.imaginary;

        return result;
    }
};

int main()
{
    Complex c1, c2, c3;

    cout << "Enter first complex number:" << endl;
    c1.set();

    cout << "\nEnter second complex number:" << endl;
    c2.set();

    // Add c1 and c2
    c3 = c1.sum(c2);

    cout << "\nFirst Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "Sum of Complex Numbers: ";
    c3.display();

    return 0;
}