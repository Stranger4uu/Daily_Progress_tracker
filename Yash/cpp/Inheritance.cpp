// Single inheritance in public mode 

/* 
#include <iostream>
using namespace std;

class B
{
    int a;  

public:
    int b;  

    void set_ab(void);
    int get_a(void);
    void show_a(void);
};

class D : public B  
{
    int c;

public:
    void mul(void);
    void display(void);
};


void B::set_ab(void)
{
    a = 5;
    b = 10;
}

int B::get_a(void)
{
    return a;
}

void B::show_a(void)
{
    cout << "a = " << a << "\n";
}

void D::mul(void)
{
    c = b * get_a();
}

void D::display(void)
{
    cout << "a = " << get_a() << "\n";
    cout << "b = " << b << "\n";
    cout << "c = " << c << "\n\n";
}



int main()
{
    D d;

    d.set_ab();
    d.mul();
    d.show_a();
    d.display();

    d.b = 20;
    d.mul();
    d.display();

    return 0;
}
*/


// Single inheritance in private mode 
#include <iostream>
using namespace std;

class B
{
    int a;
public:
    int b;
    void get_ab();
    int get_a(void);
    void show_a(void);
};

class D : private B
{
    int c;
public:
    void mul(void);
    void display(void);
};

void B::get_ab(void)
{
    cout << "Enter values for a and b: ";
    cin >> a >> b;
}

int B::get_a()
{
    return a;
}

void B::show_a()
{
    cout << "a = " << a << "\n";
}

void D::mul()
{
    get_ab();
    c = b * get_a();
}

void D::display()
{
    show_a();
    cout << "b = " << b << "\n"
         << "c = " << c << "\n\n";
}

int main()
{
    D d;
    d.mul();
    d.display();
    d.mul();
    d.display();
    return 0;
}
