#include <iostream>
using namespace std;

class FO {
public:

    void add(int a) {
        int x = a;
        cout << a << endl;
    }

    void add(int a, int b) {
        int x = a;
        int y = b;

        cout << a << " " << b;
    }
};

int main() {
    FO a;
    a.add(5);
    a.add(3, 5);
    return 0;
}