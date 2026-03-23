
#include <iostream>
using namespace std;

struct Complex {
    float real;
    float imag;
};

int main() {
    Complex c1, c2, result;
    
    cout << "Enter first complex number (real imaginary): ";
    cin >> c1.real >> c1.imag;
    
    cout << "Enter second complex number (real imaginary): ";
    cin >> c2.real >> c2.imag;
    
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    
    cout << "Sum: " << result.real << " + " << result.imag << "i" << endl;
    
    return 0;
}
