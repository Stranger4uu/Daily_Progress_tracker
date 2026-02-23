#include <iostream>
using namespace std;

class Complex
{
    float x, y;

public:
    Complex() { }                          // constructor no argument
    Complex(float a) { x = y = a; }        // constructor - one argument
    Complex(float real, float imag)        // constructor - two arguments
    {
        x = real;
        y = imag;
    }

    friend Complex sum(Complex, Complex);
    friend void show(Complex);
};

Complex sum(Complex c1, Complex c2)   // friend function
{
    Complex c3;
    c3.x = c1.x + c2.x;
    c3.y = c1.y + c2.y;
    return c3;
}

void show(Complex c)   // friend function
{
    cout << c.x << " + j" << c.y << "\n";
}

int main()
{
    Complex A(2.7, 3.5);   // define & initialize
    Complex B(1.6);        // define & initialize
    Complex C;             // define

    C = sum(A, B);

    cout << "A = "; show(A);
    cout << "B = "; show(B);
    cout << "C = "; show(C);

    // Another way to give initial values (second method)
    Complex P, Q, R;        // define P, Q and R
    P = Complex(2.5, 3.9);  // initialize P
    Q = Complex(1.6, 2.5);  // initialize Q
    R = sum(P, Q);

    cout << "\n";
    cout << "P = "; show(P);
    cout << "Q = "; show(Q);
    cout << "R = "; show(R);

    return 0;
}