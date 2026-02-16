/* 
Write a C++ program using a class student to store student name, 
roll number and marks of three subjects. 
Accept the details from the user and display the student details along with the average marks.
*/

#include <iostream>
#include <string>
using namespace std;

class student
{
private:
    int roll;
    string name;
    void getd();

public:
    int m1;
    int m2;
    int m3;
    void show();
};

void student::getd()
{
    cout << "name:" << "\n";
    cin >> name;

    cout << "roll:" << "\n";
    cin >> roll;

    cout << "marks1:" << "\n";
    cin >> m1;

    cout << "marks2:" << "\n";
    cin >> m2;

    cout << "marks3:" << "\n";
    cin >> m3;
}

void student::show()
{
    getd();
    cout << name << "\n"
         << roll << "\n"
         << "avg=" << (m1 + m2 + m3) / 3;
}

int main()
{
    student s1;
    s1.show();
    return 0;
}
