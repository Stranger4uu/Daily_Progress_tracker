// syntax
// friend <return type> <function name> (argument list )
// We can't call friend function with the object name
/*
#include <iostream>
using namespace std;

// Class definition
class sample {
private:
    int a, b;

public:
    void set(int x, int y) {
        a = x;
        b = y;
    }

    // Declare friend function
    friend float mean(sample s);
};

// Friend function definition
float mean(sample s) {
    return (s.a + s.b) / 2.0;
}

// Main function
int main() {
    sample z;
    z.set(10, 20);
    cout << "Mean: " << mean(z) << endl;
    return 0;
}

*/

// function friendly of 2 classes

#include <iostream>
using namespace std;

class ABC;

class XYZ
{
    int x;

public:
    void setvalue(int i)
    {
        x = i;
    }

    friend void max(XYZ, ABC);
};

class ABC
{
    int a;

public:
    void setvalue(int i)
    {
        a = i;
    }

    friend void max(XYZ, ABC);
};

void max(XYZ m, ABC n)
{
    if (m.x >= n.a)
        cout << "Maximum value is: " << m.x;
    else
        cout << "Maximum value is: " << n.a;
}

int main()
{
    ABC abc;
    abc.setvalue(10);

    XYZ xyz;
    xyz.setvalue(20);

    max(xyz, abc);

    return 0;

}


// #include <iostream>
// using namespace std;

// class Sample{
//     int a,b;
// public:
//     void setData(){
//         a=40;
//         b=50;
//     }
//     friend int add(Sample s);
// };
// int add(Sample s){
//     return (s.a+s.b);
// }
// int main(){
//     Sample B;
//     B.setData();
//     cout<< "Addition = "<<add(B);
//     return 0;
// }