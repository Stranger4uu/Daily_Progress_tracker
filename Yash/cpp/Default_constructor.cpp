#include <iostream>
using namespace std;

class ABC
{
    private:
    int a;
    public:
    ABC()
    {
        cout<<"Hello";
    }
};
int main()
{
    ABC x;
}

// Constructors are invoke automutacilly whne objects are created 
// They should be declared in public section only 
// they don't have any return type , not even void 
// the name of the constructor is same as the name of class 
// distructor is used to destroy the constructor 