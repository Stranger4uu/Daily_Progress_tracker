// function overloading without class
#include <iostream>
using namespace std;
void add(int a)
{
    int x = a;
    cout << "Value of x: " << x << endl;
}
void add(int a, int b)
{
    int x = a;
    int y = b;
    cout << a << " " << b;
}
int main()
{
    add(10);
    add(10, 20);
    return 0;
}