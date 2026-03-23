#include <iostream>
using namespace std;

int count = 0;

class alpha
{
public:
    alpha()
    {
        ::count++;
        cout << "\nNo. of object created " << ::count;
    }

    ~alpha()
    {
        cout << "\nNo. of object destroyed " << ::count;
        ::count--;
    }
};

int main()
{
    cout << "\n\nENTER MAIN\n";

    alpha A1, A2, A3, A4;

    {
        cout << "\n\nENTER BLOCK1\n";
        alpha A5;
    }

    {
        cout << "\n\nENTER BLOCK2\n";
        alpha A6;
    }

    cout << "\n\nRE-ENTER MAIN\n";

    return 0;
}

// destructor destroy in reverse order