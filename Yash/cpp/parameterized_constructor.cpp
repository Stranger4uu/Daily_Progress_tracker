#include <iostream>
using namespace std;

class ABC
{
    private:
    int a;
    public:
    ABC(int p)
    {
        a=p;
    }

    void display()
    {
        cout<<a<<endl;
    }
};
int main()
{
    ABC x(10);
    x.display();
    ABC y=ABC(20);
    y.display();
    return 0;
}