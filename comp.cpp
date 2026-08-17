#include <iostream>
using namespace std;

class Complex {
public:
    int real;
    int imaginary;

    Complex() {
        real = 0;
        imaginary = 0;
    }

    Complex(int r, int i) {
        real = r;
        imaginary = i;
    }

    
    Complex addComplexNumber(Complex c1, Complex c2) {
        Complex res;
        res.real = c1.real + c2.real;
        res.imaginary = c1.imaginary + c2.imaginary;
        return res;
    }
};

int main() {
    Complex c1(3, 2);
    Complex c2(1, 7);
    Complex c3;

    c3 = c3.addComplexNumber(c1, c2);

    cout << "Sum: " << c3.real << " + " << c3.imaginary << "i" << endl;
    return 0;
}






























