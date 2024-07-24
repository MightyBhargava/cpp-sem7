#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imaginary;

public:
    Complex(int r = 0, int i = 0) : real(r), imaginary(i) {}

    Complex add(const Complex& c) {
        return Complex(real + c.real, imaginary + c.imaginary);
    }

    Complex subtract(const Complex& c) {
        return Complex(real - c.real, imaginary - c.imaginary);
    }

    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    int real1, imag1, real2, imag2;

    cout << "Enter the real part of the first complex number: ";
    cin >> real1;
    cout << "Enter the imaginary part of the first complex number: ";
    cin >> imag1;

    cout << "Enter the real part of the second complex number: ";
    cin >> real2;
    cout << "Enter the imaginary part of the second complex number: ";
    cin >> imag2;

    Complex c1(real1, imag1);
    Complex c2(real2, imag2);

    cout << "\nInput Values" << endl;
    cout << "First complex number: ";
    c1.display();
    cout << "Second complex number: ";
    c2.display();

    cout << "\nResult after addition" << endl;
    Complex sum = c1.add(c2);
    sum.display();

    cout << "\nResult after subtraction" << endl;
    Complex diff = c1.subtract(c2);
    diff.display();

    return 0;
}
