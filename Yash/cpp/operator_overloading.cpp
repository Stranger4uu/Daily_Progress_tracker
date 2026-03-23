#include<iostream>
using namespace std;

class space{
    private:
        int x;
        int y;
        int z;
    public:
        void getdata(int,int,int);
        void display(void);
        void operator -();
};

void space::getdata(int a,int b,int c){
    x=a;
    y=b;
    z=c;
}

void space::display(){
    cout<<x<<y<<z<<endl;
}

void space::operator -(){
    x=-x;
    y=-y;
    z=-z;
}

int main(){
    space s;
    s.getdata(10,20,30);
    s.display();
    -s;
    s.display();
    return 0;
}