#include <iostream>
#include <string>
using namespace std;

class Student {

public:
    string name;
    void Data(string n) {
        name = n;
    }

    void display() {
        cout << "Name: " << name << endl;
    }
};

int main(){
    Student s[5];
    for (int i = 0; i < 5; i++) {
        string name;

        cout << "Enter name for student " << i + 1 << ": ";
        cin >> name;

        s[i].Data(name);
    }

    cout << "Displaying Student Names:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << ":" << endl;
        s[i].display();
    }

    return 0;
}
