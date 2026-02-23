#include<iostream>
using namespace std;

class code {
    int id;
    public:
        code() {cout<<"DC"<<endl;} 
        code(int a) { 
            id = a;
        }
        code(const code &x) { 
            id = x.id;
        }
        int display(void) { 
            return id;
        }
};

int main() {
    code A(100);
    code B(A);
    code C = A;
    code D;
    D=A;
    cout<<A.display()<<endl;
    cout<<B.display()<<endl;
    cout<<C.display()<<endl;
    cout<<D.display()<<endl;

    return 0;
}
