#include <iostream>
using namespace std;
class Student {
private:
    string name;
    int rn;
    float marks;
public:
    void inputDetails() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll Number: ";
        cin >> rn;
        cout << "Enter Marks: ";
        cin >> marks;
    }
    void displayDetails() {
        cout << "Student Details " << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rn << endl;
        cout << "Marks: " << marks << endl;
    }
};
int main() {
    Student s;
    s.inputDetails();
    s.displayDetails();
    return 0;
}