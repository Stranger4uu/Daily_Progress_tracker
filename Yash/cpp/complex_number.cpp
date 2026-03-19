// complex number using class
#include <iostream>
using namespace std;

class Complex {
    
    float x, y;
    public:
    Complex() { }
    Complex(float a) {x = y = a;}
    Complex (float real, float imag) {
        x = real;
        y = imag;
    }
    friend Complex sum(Complex, Complex);
    
    friend void show(Complex);
};
Complex sum(Complex c1, Complex c2) {
    Complex c3;
    c3.x = c1.x + c2.x;
    c3.y = c1.y + c2.y;
    return(c3);
}
void show(Complex c) {
    cout << c.x << "i + " << c.y << "j" << endl;
}
int main() {
    Complex A(2.7, 3.5);
    Complex B(1.6);
    Complex C;
    C = sum(A, B);
    cout << "A = "; show(A);
    cout << "B = "; show(B);
    cout << "C = "; show(C);
    Complex P, Q, R;
    P = Complex(2.5, 3.9);
    Q = Complex(1.6, 2.5);
    R = sum(P, Q);
    cout << endl << "-------------------------" << endl << endl;
    cout << "P = "; show(P);
    cout << "Q = "; show(Q);
    cout << "R = "; show(R);
    return 0;
}